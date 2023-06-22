//circular queue using linked list
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head=0;
struct node*tail=0;

void insert(int ele){
    struct node*new_node=(struct node*)malloc(sizeof(struct mode*));
    new_node->data=ele;
    if(head==0 && tail==0){
        head=tail=new_node;
        tail->next=head;
    }
    else{
        tail->next=new_node;
        tail=new_node;
        tail->next=head;
        
    }
}
void delete(){
    struct node*temp=(struct node*)malloc(sizeof(struct node*));
    temp=head;
    if(head==tail){
        head=tail=0;
        free(temp);
    }
    else{
        head=head->next;
        tail->next=head;
        free(temp);
    }
}
void display(){
    struct node*temp;
    temp=head;
    if(head==0 && tail==0){
        printf("empty");
    }
    else{
        while(temp->next!=head){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}
void peek(){
     if(head==0 && tail==0){
        printf("empty");
    }
    else{
        printf("\n%d",head->data);
    }
}
int main()
{
    insert(20);
    insert(23);
    insert(32);
    insert(31);
    delete();
    display();
    peek();

    return 0;
}
