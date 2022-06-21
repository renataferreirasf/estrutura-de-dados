#include <stdio.h>
#include <stdlib.h>
#include "listaencadeada.h"

void main(){
    list *l = createList();
    printf("Lista adiona 70\n" );
    adicionar(l,70);
    adicionar(l,71);
    adicionar(l,72);
    adicionar(l,73);
    adicionar(l,74);
    adicionar(l,75);
    imprimeList(l);
    printf("O tamanho  %d\n", size(l));
    printf("%d\n",hasElement(l,73));
    printf("%d\n",hasElement(l,80));
    printf("%d\n", insertPosition(l,100,3));
    imprimeList(l);
    printf("O tamanho %d\n", size(l));
    printf("%d\n", removePosition(l,3));
    imprimeList(l);
    printf("O tamanho %d\n", size(l));
    printf("%d\n", removeElement(l,500));
    printf("%d\n", removeElement(l,74));
    imprimeList(l);
    printf("O tamanho %d\n", size(l));
    int *vRet;
    printf("%d\n",get(l,2,vRet));
    
}