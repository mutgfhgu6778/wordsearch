// word.h: interface for the word class.
//
//////////////////////////////////////////////////////////////////////
#include "definitions.h"

#if !defined(AFX_WORD_H__877C718E_6EF3_43E5_9ACE_F20BBD857BBA__INCLUDED_)
#define AFX_WORD_H__877C718E_6EF3_43E5_9ACE_F20BBD857BBA__INCLUDED_


word word_ini(void);
void word_str_cp(word, char*);
void word_cp(word, word);
int word_cmp(word, word);
void word_print(word);
void word_free(word);

#endif // !defined(AFX_WORD_H__877C718E_6EF3_43E5_9ACE_F20BBD857BBA__INCLUDED_)
