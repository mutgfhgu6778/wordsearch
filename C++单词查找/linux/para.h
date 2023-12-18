// para.h: interface for the para class.
//
//////////////////////////////////////////////////////////////////////
#include "definitions.h"
#if !defined(AFX_PARA_H__4D554EB6_E744_4FA0_9972_874A2588A0E4__INCLUDED_)
#define AFX_PARA_H__4D554EB6_E744_4FA0_9972_874A2588A0E4__INCLUDED_


para para_ini(void);
void para_add(para, line);
void para_print(para);
int para_search_print(para, word);
void para_free(para);

#endif // !defined(AFX_PARA_H__4D554EB6_E744_4FA0_9972_874A2588A0E4__INCLUDED_)
