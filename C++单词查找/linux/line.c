// line.cpp: implementation of the line class.
//
//////////////////////////////////////////////////////////////////////
#include "stdio.h"
#include "stdlib.h"

#include "headers.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
line line_ini(void) {
	line l;
	l = (line) malloc(sizeof(line_struct));
	l->wp = NULL;
	l->size = 0;
	return l;
}

void line_free(line l) {
	int i;
	for (i=0; i<l->size; i++) {
		word_free(l->wp[i]);
	}
	free(l);
}

void line_add(line l , word w)
{
	if(l == NULL || w == NULL)return;
	int len = l->size+1;

	l->wp = (word*)realloc(l->wp,sizeof(word*)*len);
	word  lw = word_ini();
	word_cp(lw,w);
	l->wp[len-1]=lw;
	l->size  = len;

}

void line_cp(line  l1, line  l2)
{
	if(l1 == NULL || l2 == NULL)return;

	int i;

	for (i=0; i<l1->size; i++) {
		word_free(l1->wp[i]);
	}

	l1->size = l2->size;
	l1->wp = (word*)realloc(l1->wp,sizeof(word*)*l1->size);

	word  w1;
	for(i=0;i<l2->size;i++)
	{
		w1 = word_ini();
		word_cp(w1,l2->wp[i]);
		l1->wp[i] = w1;
	}
}

void line_print(line l)
{
	int i;
	for (i=0; i<l->size; i++) {
		word_print(l->wp[i]);
		printf(" ");
	}
}

int line_search(line l, word w)
{
	int sum;
	int i;
	sum = 0;
	for (i=0; i<l->size; i++) {
		if(word_cmp(l->wp[i],w) == 0)
		{
			sum ++;
			printf("position=%d ",i);
		}
	}
	return  sum;
}

int line_word_position(line, word)
{
	return  -1;
}

void line_reset(line l)
{
	int i;
	for (i=0; i<l->size; i++) {
		word_free(l->wp[i]);
	}
	free(l->wp);
	l->wp = NULL;
	l->size = 0;
}
