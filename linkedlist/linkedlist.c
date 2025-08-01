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

void linedList(struct linkedlist *name){
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

    if(head == NULL){
        // add first element to linked list
        lnklst->head = newnode;
        lnklst->temp = newnode;
    }else{
        newnode ->next = lnklst->temp;
        lnklst->temp = newnode;
    }
}

void print(){
    if(head == NULL){
        printf("No Elements In LinkedList");
    }else{
        struct node * t = temp;
        while(t != NULL){
            printf("| %d ",t->data);
            t = t->next;
        }
    }
}


int main(){

    add(10);
    add(20);
    add(30);

    print();


    return 0;
}