// TestSearch.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"



int main(void) {
	char	str[1024];
	para    p = para_ini();
	line    l=line_ini();
	word    w=word_ini();
	int     i;

	char    *p1,*p2;
	char    temp[128];

	printf("please input a paragraph with a blank line:\n");
	while(1)
	{
		memset(str,0,1024);
		//scanf("%s%c",str,&c);

		fgets(str,1023,stdin);

		i = strlen(str);

		if(str[0] == '\n' || i <= 0)break;

		if(str[i-1] == '\n')str[i-1] = 0x00;

		line_reset(l);
		p1 = p2 = str;
		while(*p1 != 0x00)
		{
			while(*p2 != 0x00 && *p2 != 0x20)p2++;

			memset(temp,0,128);
			memcpy(temp,p1,p2-p1);

			word_str_cp(w,temp);
			line_add(l, w);

			p1 = p2;
			while(*p1 == 0x20)p1++;

			p2 = p1;
			if(*p1 == 0x00)
			{
				para_add(p, l);
				break;
			}
		}
	}
	printf("The paragraph is :\n");
	para_print(p);

	printf("\n\n");
	int  sum;
	while(1)
	{
		printf("please enter the word to search:");
		memset(temp,0,128);

		fgets(temp,127,stdin);

		i = strlen(temp);

		if(temp[0] == '\n' || i <= 0)break;
		if(temp[i-1] == '\n')temp[i-1] = 0x00;

		word_str_cp(w,temp);
		sum = para_search_print(p,w);
		if(sum == 0)
		{
			printf("%s has not been found.\n",temp);
		}
		else
		{
			printf("%s was found %d times.\n",temp,sum);
		}
	}

	word_free(w);
	line_free(l);
	para_free(p);


	return 0;
}

/*	char test[]="testing";
	word w=word_ini();
	word w1=word_ini();
	line l=line_ini();
	para p=para_ini();
	word_str_cp(w, "cs2211");
	line_add(l, w);
	word_str_cp(w, test);
	line_add(l, w);
	line_print(l);
	para_add(p, l);
	line_reset(l);
	word_str_cp(w, "asn4");
	line_add(l, w);
	word_str_cp(w1, test);
	word_cp(w, w1);
	line_add(l, w);
	line_print(l);
	para_add(p, l);
	para_print(p);
	word_free(w);
	word_free(w1);
	line_free(l);
	para_free(p);
	*/
