#include <stdlib.h> //malloc

#define max 100
typedef struct{
		int n; //quantidade de elementos
 		int start;
		int vet[max];
} row; 

row * criarow ();

void insere (row *f, int v);

int retira(row *f);

void limparow(row *f);

int size(row *f);