// word.cpp: implementation of the word class.
//
//////////////////////////////////////////////////////////////////////

#include "headers.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
word word_ini(void) {
	word w;
	w = (word) malloc(sizeof(word_struct));
	w->cp = NULL;
	w->size = 0;
	return w;
}
void word_free(word wd) {
	if (wd->cp != NULL) free(wd->cp);
	free(wd);
}

void word_str_cp(word wd, char*  sz)
{
	if(wd == NULL || sz == NULL)return;

	int len = strlen(sz) + 1;
	wd->cp = (char*)realloc(wd->cp,len);
	strcpy(wd->cp,sz);
	wd->size = len;
}

void word_cp(word  wd1, word  wd2)
{
	if(wd1 == NULL || wd2 == NULL)return;

	int len = wd2->size;
	wd1->cp = (char*)realloc(wd1->cp,len);
	memset(wd1->cp,0,len);
	memcpy(wd1->cp,wd2->cp,len);
	wd1->size = len;
}

int word_cmp(word wd1, word wd2)
{
	if(wd1 == wd2 )return  0;
	if(wd1 == NULL || wd2 == NULL)return -1;
	if(wd1->size != wd2->size )return  -1;
	if(wd1->cp == NULL || wd2->cp == NULL)return -1;

	return strcmp(wd1->cp,wd2->cp);
}

void word_print(word wd)
{
	if(wd != NULL)
	{
		if(wd->cp != NULL)
			printf("%s",wd->cp);
	}
}
