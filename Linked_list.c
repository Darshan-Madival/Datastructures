//implementation of linked list-----------------------------------------------
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printflist(struct node *n){
    while(n!=NULL){
        printf("%d\t",n->data);
        n=n->next;
    }
    printf("\n");
}
void pushdata(struct node **head_ref,int new_data ){
         struct node *new_node=(struct node *)malloc(sizeof(struct node));
         new_node->data=new_data;
         new_node->next=(*head_ref);
         (*head_ref)=new_node;
}
void appenddata(struct node **head_ref,int new_data){
    struct node *last_node=(*head_ref);
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    // printf("%d",last_node->data);
    // last_node=last_node->next;
    // printf("%d",last_node->data);  
    while(last_node->next!=NULL){
            last_node=last_node->next;
    }
    last_node->next=new_node;
    new_node->data=new_data;
    new_node->next=NULL;    
}
void delete_from_end(struct node *head){
    struct node *prev_node=(struct node *)malloc(sizeof(struct node));
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp=head;
    while(temp->next!=NULL){
        prev_node=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=0;
    }
    else{
        prev_node->next;
    }
    free(temp);
    

}
void delete_from_pos(struct node **head_ref,int key){
    struct node *prev_node=NULL;
    struct node *temp=(*head_ref);
    
    if((*head_ref)==NULL){
          return;
    }
    if((*head_ref)->data==key){
          (*head_ref)=(*head_ref)->next;
          free(temp);
          return;
    }
    while(temp && temp->data!=key){
        prev_node=temp;
        temp=temp->next;
    }
    if(temp==NULL)
        return;
    prev_node->next = temp->next;
    free(temp);
    
}
void insertion(struct node **head_ref,int key,int nod){
    struct node *temp=*head_ref;
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    struct node *next_node=(struct node*)malloc(sizeof(struct node));
    while(temp && temp->data!=key){
        temp=temp->next;
    }
       new_node->data=nod;
       new_node->next=temp->next;
       temp->next=new_node;

}

void reverse_data(struct node **head_ref){
    struct node *prev_node,*curr_node,*next_node;
    prev_node=0;
    curr_node=*head_ref;
    next_node=*head_ref;
    while(next_node!=0){
          next_node=next_node->next;
          curr_node->next=prev_node;
          prev_node=curr_node;
          curr_node=next_node;
    }
    *head_ref=prev_node;
}
void swap_list(struct node **head_ref,int a,int b){
    struct node *temp,*x,*y,*prev_x,*prev_y;
    temp=*head_ref;
    x=*head_ref;
    y=*head_ref;
    while(x && x->data!=a){
        prev_x=x;
        x=x->next;
    }
    while(y && y->data!=b){
        prev_y=y;
        y=y->next;
    }
    temp=x->next;
    x->next=y->next;
    y->next=temp;
    prev_x->next=y;
    prev_y->next=x;
    

    
}
int main()
{
   struct node *head=NULL;
   pushdata(&head,30);
   pushdata(&head,20);
   pushdata(&head,10);

   appenddata(&head,40);
   appenddata(&head,50);
   appenddata(&head,60);
   appenddata(&head,100);

//    printflist(head);   

//    deletedata(head); `
// delete_from_end(head);
   delete_from_pos(&head,100);

//    printflist(head);
   insertion(&head,60,70);
//    printflist(head);printflist(head);

   reverse_data(&head);
   printflist(head);

   swap_list(&head,30,50);
   printflist(head);
   

   return 0;
}