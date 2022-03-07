#include<stdio.h>
#include<stdlib.h>

struct singly{
    int data;
    struct singly *next;
};

typedef struct singly SLL;

SLL *headptr = NULL, *p, *temp;

void insert_at_last(int data){

    temp = (SLL *)malloc(sizeof(SLL));
    temp->data = data;
    temp->next = NULL;

    if(headptr = NULL)
        headptr = temp;
    else{
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void insert_at_first(int data){
    temp = (SLL *)malloc(sizeof(SLL));
    temp->data = data;
    p = headptr;
    headptr = temp;
    temp->next = p;
}

void insert_at_nth(int data, int n){
    temp = (SLL *)malloc(sizeof(SLL));
    temp->data = data;
    p = headptr;

    while(n>2){
        p = p->next;
        n--;
    }
    temp->next = p->next;
    p->next = temp;
}

void delete_first_node(){
    if(headptr!=NULL){
        p = headptr;
        headptr = headptr->next;
        free(p);
    }
}

void delete_last_node(){
    p = headptr;
    while(p->next->next!=NULL){
        p = p->next;
    }
    temp = p->next;
    p->next = NULL;
    free(temp);
}

void delete_nth_node(int data , int n){
    p = headptr;
    temp = (SLL *)malloc(sizeof(SLL));

    while(n>2){
        p = p->next;
        n--;
    }

    temp = p->next;
    p->next = p->next->next;
    free(temp);
}
int main()
{

    return 1;
}