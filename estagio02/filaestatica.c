#include "rowestatica.h"

row * criarow () {
    row *f = (row*)malloc(sizeof(row));
    f->start = 0;
    f->n = 0;
    return f;
}

void insere (row *f, int v) {
    int fim = 0;
    if (f->n < max) { 
	  fim = (f->start + f->n) %max ;
        f->vet[fim] = v;
        f->n = f->n + 1;
    }
}

int retira(row *f) {
    int ret;
    if (f->n > 0) { 
        ret = f->vet[f->start];
        f->start = ((f->start) + 1)%max;
        f->n--;
    }
    return ret;
}

void limparow(row *f) {
    free(f);
}

int size(row *f) {
    return f->n;
}