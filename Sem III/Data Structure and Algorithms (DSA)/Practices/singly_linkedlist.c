#include<stdio.h>
#include<stdlib.h>

struct singly{

    int data;
    struct singly *next;
};

typedef struct singly SCLL;
SCLL *headptr = NULL, *p, *temp;

void create_node(int data){
    temp = (SCLL *)malloc(sizeof(SCLL));
    temp->data = data;
    p = headptr;

    while(p->next!=headptr){
        p = p->next;
    }
    p->next = temp;
    temp->next = headptr;
}

void insert_at_nth(int data,int n){

    temp = (SCLL *)malloc(sizeof(SCLL));
    temp->data = data;

    p = headptr;
    while(n>2){
        p = p->next;
        n--;
    }
    temp->next = p->next;
    p->next = temp;
}

void display_data(){
    p = headptr;
    while(p->next->next!=headptr){
        printf("%d ", p->data);
        p = p->next;
     
    }
}

int main()
{

    create_node(5);
    create_node(4);
    display_data();
}