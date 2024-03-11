#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*first=NULL;
struct node*last=NULL;

void enqueue(int val){
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=val;
    ptr->next=NULL;
    if(first==NULL){
        first=last=ptr;
    }
    else{
        last->next=ptr;
        last=ptr;
    }
}
void dequeue(){
     struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(first==NULL){
        printf("The queue is empty");
    }
    else{
        ptr=last;
        printf("The deleted element is %d\n",first->data);
        first=first->next;
    }
}
int main(){
    enqueue(30);
    enqueue(49);
    enqueue(60);
    enqueue(90);
    dequeue();
    dequeue();
    dequeue();
    
}