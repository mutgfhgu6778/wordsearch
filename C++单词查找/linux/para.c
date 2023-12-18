// para.cpp: implementation of the para class.
//
//////////////////////////////////////////////////////////////////////

#include "headers.h"

#include "stdio.h"
#include "stdlib.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
para para_ini(void) {
	para p;
	p = (para) malloc(sizeof(para_struct));
	p->lp = NULL;
	p->size=0;
	return p;
	}

void para_free(para p) {
	int i;
	for (i=0; i<p->size; i++) {
		line_free(p->lp[i]);
	}
	free(p);
}

void para_add(para p, line l)
{
	if(l == NULL || p == NULL)return;
	int len = p->size+1;

	p->lp = (line*)realloc(p->lp,sizeof(line*)*len);
	line ll = line_ini();
	line_cp(ll,l);
	p->lp[len-1]=ll;
	p->size  = len;


}

void para_print(para p)
{
	if(p == NULL)return ;
	int i;
	for (i=0; i<p->size; i++) {
		line_print(p->lp[i]);
		printf("\n");
	}
}

int para_search_print(para p, word w)
{
	if(p == NULL || w == NULL)return -1;
	int i;
	int ret = 0;
	int sum  = 0;
	for (i=0; i<p->size; i++) {
		sum = line_search(p->lp[i], w);
		if(sum > 0){
			printf("line=%d found %d \n",i,sum);
		}
		ret = ret + sum;
	}

	return  ret;

}
