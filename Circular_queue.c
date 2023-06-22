//circular queue in c
#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void insert(int ele){
    if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=ele;
    }
    else if((rear+1)%N==front){
        printf("The queue is full");
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=ele;
    }
}
void delete(){
    if(front==-1 && rear==-1){
        printf("Underflow");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%N;
    }
}
void display(){
    int i=front;
    if(front==-1 && rear==-1){
        printf("Undrflow");
    }
    else {
        while(i!=rear){
            printf("%d\t",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }
}
void peek(){
    if(front==-1 && rear==-1){
        printf("Undrflow");
    }
    else{
        printf("the first element is %d\n",queue[front]);
    }
}
int main(){
    insert(20);
    insert(30);
    insert(35);
    insert(90);
    insert(37);
    delete();
    insert(23);
    peek();
    display();
    
    return 0;
}
