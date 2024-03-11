#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*first=NULL;
struct node*last=NULL;
void push(int val){
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=val;
    ptr->next=NULL;
    if(first==NULL){
       first=last=ptr;
    }
    else{
        ptr->next=first;
        first=ptr;
    }
}
void peek(){
    if(first==NULL){
        printf("The stack is empty");
    }
    else{
        printf("The top element is %d\n",first->data);
    }
}
void pop(){
    struct node*ptr;
    if(first==NULL){
        printf("The stack is empty");
    }
    else{
        ptr=first;
         printf("The element poped is %d\n",first->data);
        first=first->next;
    }
       
}
int main(){
   push(10);
   push(20);
   push(30);
   push(40);
   

   peek();
   pop();
   peek();

}