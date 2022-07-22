#include "rowdinamica.h"

row * criarow() {
    row *f = (row*)malloc(sizeof(row));
    f->start = NULL;
    f->end = NULL;
    return f;
}

void insere (row *f, int value){
    no *newN = (no*)malloc(sizeof(no));
	newN->value = value;
	newN->next = NULL;
	if(f->end != NULL) {
		f->end->next = newN;
        f->end = newN;
	}
	else {
		f->start = newN;
		f->end = newN;
	}
}

int retira(row *f, int *vret) {
	no *temp;
	if(f->start == NULL) return -1;
	else {
		temp = f->start;
		*vret = temp->value;
		f->start = f->start->next;
		if(f->start == NULL) {
			f->end = NULL;
		}	
		free(temp); //desaloca a memória
		return 0;    
	}
}

void limparow (row *f) {
     no *q, *t;
     q = f->start; 
     while (q != NULL) {
        	t = q;
        	q = q->next;
       		free(t);
     }  
     f->start = NULL;
     f->end = NULL;  
}