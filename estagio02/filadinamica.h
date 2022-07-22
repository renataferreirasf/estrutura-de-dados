#include <stdlib.h> //malloc

struct no {
	int value;
	struct no *next;
};

typedef struct no no;

typedef struct {
	no *start;
	no *fim;
} row; 

row * criarow ();

void insere (row *f, int value);

int retira(row *f, int *vret);

void limparow(row *f);