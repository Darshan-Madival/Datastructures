#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node*first=NULL;
struct node*last=NULL;

void insert_node(int val){
    struct node *ptr;
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
void delete_front(){
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));

    if(first==NULL){
        printf("The list is empty");
    }
    else if(first==last){
        printf("The node is deleted sucessfully");
        first=last=NULL;
    }
    else{
        ptr=first;
        first=first->next;
        printf("The node is deleted sucessfully");
    }
}

void delete_end(){
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(first==NULL){
        printf("The list is empty\n");
    }
    else if(first==last){
        printf("The element sucessfully deleted");
        first=last=NULL;
    }
    else{
        ptr=first;
        while(ptr->next!=last){
            last=ptr;
        }
        last->next=NULL;
    }
}
void print_node(){
    struct node*ptr;
    if(first==NULL){
        printf("The list is empty");
    }
    else{
        ptr=first;
        while(ptr->next!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("%d\n",ptr->data);
    }
}

void search(int val){
    struct node*ptr;
    if(first==NULL){
        printf("The list is empty");
    }
    else{
       ptr=first;
       while(ptr){
          if(ptr->data==val){
            printf("The value found\n");
            break;
          }
          else{
            ptr=ptr->next;
          }
       }
    
    }
}

int main(){
     insert_node(10);
     insert_node(20);
     insert_node(30);
     insert_node(40);
     insert_node(50);
     print_node();
     search(10);
}