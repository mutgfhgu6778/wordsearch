// line.h: interface for the line class.
//
//////////////////////////////////////////////////////////////////////
#include "definitions.h"


#if !defined(AFX_LINE_H__9CD8B6D4_B52C_4C25_982D_5AD52A431326__INCLUDED_)
#define AFX_LINE_H__9CD8B6D4_B52C_4C25_982D_5AD52A431326__INCLUDED_

line line_ini(void);
void line_add(line, word);
void line_cp(line, line);
void line_print(line);
int line_search(line, word);
int line_word_position(line, word);
void line_reset(line);
void line_free(line);

#endif // !defined(AFX_LINE_H__9CD8B6D4_B52C_4C25_982D_5AD52A431326__INCLUDED_)
