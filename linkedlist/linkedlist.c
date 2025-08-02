#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

// head pointer is pointing to first node in linkedList , it not changed
// temp is use store address temperly
// first we init the LinkedList

struct linkedlist{
    struct node *head;
    struct node *temp;
    
};

void linedList_init(struct linkedlist *name){
    name->head = NULL;
    name->temp = NULL;
}




void add(struct linkedlist *lnklst,int value){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));     // malloc is return void pointer -> type cast to 'struct node' data type

    if (newnode == NULL){
        printf("memory allocation fail");
        exit(1);
    }
    newnode->data = value;

    if(lnklst->head == NULL){
        // add first element to linked list
        lnklst->head = newnode;
        lnklst->temp = newnode;
    }else{
        newnode ->next = lnklst->temp;
        lnklst->temp = newnode;
    }
}

void print(struct linkedlist *lnklst){
    if(lnklst->head == NULL){
        printf("\nNo Elements In LinkedList\n");
    }else{
        struct node * t = lnklst->temp;
        while(t != NULL){
            printf("| %d ",t->data);
            t = t->next;
        }
    }
}


int main(){

    struct linkedlist l;
    linedList_init(&l);
    print(&l);
    add(&l,1);
    add(&l,2);
    add(&l,3);
    add(&l,4);
    print(&l);

    struct linkedlist k;
    linedList_init(&k);
    print(&k);
    add(&k,10);
    add(&k,20);
    add(&k,30);
    add(&k,40);
    print(&k);


    return 0;
}