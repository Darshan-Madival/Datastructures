#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printflist(struct node *n){
    while(n!=NULL){
        printf("%d\t",*n);
        n=n->next;
    }
    printf("\n");
}
void lastinsert();
int main()
{
   struct node *head=(struct node*)malloc(sizeof(struct node));
   struct node *first=(struct node*)malloc(sizeof(struct node));
   struct node *second=(struct node*)malloc(sizeof(struct node));
   struct node *third=(struct node*)malloc(sizeof(struct node));
   struct node *new_node=(struct node*)malloc(sizeof(struct node));
   struct node *last_node=(struct node*)malloc(sizeof(struct node));
 
   first->data=1;
   second->data=2;
   third->data=3;


   first->next=second;
   second->next=third;
   third->next=NULL;
   
   head=first;
   printflist(first);

   new_node->data=10;
   new_node->next=first;
   head=new_node;

   printflist(head);

   last_node->data=20;
   third->next=last_node;
   last_node->next=NULL;
   head=new_node;
   
   printflist(head);
   return 0;
}