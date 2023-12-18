#if !defined(AFX_DEFINITIONS_H__9CD8B6D4_B52C_4C25_982D_5AD52A431326__INCLUDED_)
#define AFX_DEFINITIONS_H__9CD8B6D4_B52C_4C25_982D_5AD52A431326__INCLUDED_


typedef struct {
	char *cp;
	int size;
} word_struct;
typedef word_struct* word;

typedef struct {
	word *wp;
	int size;
} line_struct;
typedef line_struct* line;

typedef struct {
	line *lp;
	int size;
} para_struct;
typedef para_struct* para;


#endif // !defined(AFX_DEFINITIONS_H__9CD8B6D4_B52C_4C25_982D_5AD52A431326__INCLUDED_)
