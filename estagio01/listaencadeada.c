#include <stdio.h>
#include <stdlib.h>
#include "listaencadeada.h"


list * createList(){
    list *newList = (list*)malloc(sizeof(list));
    newList->begin = NULL;
    return newList;
}

void adicionar(list *l, int v){
	node *newNode = (node*)malloc(sizeof(node));
	node *p = l->begin;
	if (l->begin==NULL)
	{
		newNode->data = v;
		newNode->next = NULL;
		l->begin = newNode;
	}
	else{
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=newNode;
		newNode->data = v;
		newNode->next = NULL;
	}
}

void imprimeList(list *l){
	node *p = l->begin;
	if (l->begin==NULL)
	{
		printf("The list is null\n");
	}
	else{
		printf("[");
		while(p!=NULL){
			printf(" %d ", p->data);
			p=p->next;
		}
		printf("]\n");
	}
	
}

int checkEmpty(list *l){
	if (l->begin==NULL)
	{
		return 0;
	}
	return 1;
}

void removeBack(list *l){
	if (l->begin==NULL)
	{
		printf("The list is null\n");
	}
	else{
		node *p = l->begin;
		node *pp = NULL;
		while(p->next!=NULL){
			pp=p;
			p=p->next;
		}
		if (l->begin==p)
		{
			l->begin = NULL;
			free(p);
		}
		else{
			pp->next = NULL;
			free(p);
		}
	}
}

int size(list *l){
	int t=1;
	if (l->begin==NULL)
	{
		return 0;
	}
	else{
		node *p = l->begin;
		while(p->next!=NULL){
			t++;
			p=p->next;
		}
	return t;
	}
}



int hasElement(list *l, int v){
	int t=0,flag=0;
	if (l->begin==NULL)
	{
		return -1;
	}
	else{
		node *p = l->begin;
		while(p!=NULL){
			if (p->data==v)
			{
				return t;
			}
			t++;
			p=p->next;
		}
		return -1;
	}
}

int insertPosition(list *l, int v, int pos){
	if(pos<0 || pos>size(l)){
		return -1;
	}
	node *newNode = (node*)malloc(sizeof(node));
	node *p = l->begin;
	node *pp = NULL;
	int t=0;
	while(p!=NULL){
		if (t==pos)
		{
			pp->next = newNode;
			newNode->data = v;
			newNode->next = p;
			return 0;
		}
		pp=p;
		p=p->next;
		t++;
	}
}

int removePosition(list *l, int pos){
	if(pos<0 || pos>size(l)){
		return -1;
	}
	node *p = l->begin;
	node *pp = NULL;
	int t=0;
	while(p!=NULL){
		if (t==pos)
		{
			pp->next = p->next;
			free(p);
			return 0;
		}
		pp=p;
		p=p->next;
		t++;
	}
}

int removeElement(list *l, int v){
	node *p = l->begin;
	node *pp = NULL;
	int t=0;
	while(p!=NULL){
		if (p->data==v)
		{
			pp->next = p->next;
			free(p);
			return t;
		}
		pp=p;
		p=p->next;
		t++;
	}
	return -1;
}

int get(list *l, int pos, int *vret){
	if(pos<0 || pos>size(l)){
		return -1;
	}
	node *p = l->begin;
	int t=0;
	while(p!=NULL){
		if (t==pos)
		{
			vret=&p->data;
			return 0;
		}
		p=p->next;
		t++;
	}
	return -1;
}