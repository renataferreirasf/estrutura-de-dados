

struct node {
    int data;
    struct node *next;
};

typedef struct node node;


typedef struct {
    node *begin;
} list;


list * createList();

void adicionar(list *l, int v);

void imprimeList(list *l);

int checkEmpty(list *l);

void removeBack(list *l);

int size(list *l);

int hasElement(list *l, int v);

int insertPosition(list *l, int v, int pos);

int removePosition(list *l, int pos);

int removeElement(list *l, int v);

int get(list *l, int pos, int *vret);