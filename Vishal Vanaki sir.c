#include<stdio.h>
void main(){
    int num,sum=0,rem=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int c;
    c=num;
    while(num>0){
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    printf("The reversed number is %d\n",sum);
    if(c==sum){
        printf("The number is palindrome\n");
    
    }
    else{
        printf("The number is not palindrome\n");
    }
}
====================================================================================================
#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0;
    int sum=1;
    printf("Enter the number;\n");
    scanf("%d",&num);
    int c=num;
    int d=num;
    if(num<10){
        printf("Armstrong\n");
        exit(0);
    }
    while(num>0){
      num=num/10;
      count++;
    }
    int f=0;
    while(c>0){
        f=c%10;
        sum=sum+pow(f,count);
        c=c/10;
    }
    if(d==sum){
        printf("Armstrong number\n");
    }
    else{
       printf("Not armstrong\n");
    }

    
    return 0;
}
===========================================================================================================
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter the Number;\n");
    scanf("%d",&num);
    int c=1;
    while(c<=num){
       if(num%c==0){
        count++;
       }
       c++;
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}
===================================================================================================================
#include<stdio.h>
int main()
{
  int a=0;
  int b=1;
  int n;
  printf("Enter the range of a Fibo:\n");
  scanf("%d",&n);
  int s=3;
//   printf("%d %d\t",a,b);
  while(s>0){
    int c=0;
    c=a+b;
    a=b;
    b=c;
    if(s==n){
    printf("%d\t",c);
    }
    s++;
  }

return 0;
}
==========================================================================================================================
#include<stdio.h>
#include<math.h>

int isFibonacci(int);
int isPerfectSquare(int);

int main()
{
    int n;

    printf("Enter NUmber: ");
    scanf("%d",&n);

    if(isFibonacci(n))
        printf("Fibonacci Number");
    else    
        printf("Not Fibonacci NUmber");
    return 0;
}
int isFibonacci(int n)
{
    if(isPerfectSquare(5*n*n+4) || isPerfectSquare(5*n*n-4) )
        return 1;
    else    
        return 0;
}

int isPerfectSquare(int n)
{
    int temp=sqrt(n);

    if(n==temp*temp)
        return 1;
    else    
        return 0;
}
=============================================================================================================================
#include<stdio.h>
int main()
{
   int a[10]={1,2,1,3,2,5,3,7,5,11};
   int n;
   printf("Enter the nth number:\n");
   scanf("%d",&n);
   for(int i=0;i<10;i++){
       if(n==i){
        printf("%d",a[i]);
       }
   }
   return 0;
}
==============================================================================================================================
#include<stdio.h>
int main()
{
   int a[5]={7,5,15,23,9};
   int n;
   printf("Enter the nth Number:\n");
   scanf("%d",&n);
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
   }
   printf("%d",a[(5-1)-n]);


   return 0;
}
===================================================================================================================================
#include<stdio.h>
void display(int a[],int n){
      // int n=sizeof(a)/sizeof(a[0]);
      printf("The size of array is: %d\n",n);
      printf("The array elements are:");
      for(int i=0;i<n;i++){
         printf("%d\t",a[i]);
   }
}
int main()
{
   int a[]={10,20,30,40,50,60};
   int n=sizeof(a)/sizeof(a[0]);
   printf("The size of array is: %d\n",n);
   printf("The array elements are:");
   for(int i=0;i<n;i++){
      printf("%d\t",a[i]);
   }
   printf("\n");
   display(a,n);
   return 0;
}
=====================================================================================================================================
#include<stdio.h>
void call_by(int* ,int* );
int main()
{
   int a=10;
   int b=20;
   printf("In main function a=%d,b=%d\n",a,b);
   call_by(&a,&b);
   printf("after  function a=%d,b=%d\n",a,b);
   return 0;
}
void call_by(int *a,int *b){
    *a=50;
    *b=89;
    printf("outside fuction a=%d,b=%d\n",*a,*b);
}
===========================================================================================================================================
Selection sort-----------------------------------
#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
     *a=*b;
     *b=temp;
    //  printf("%d\n",*a);
    //  printf("%d\n",*b);
}
int main()
{
   int a[]={20,34,67,89,10,5,2};
   int n=sizeof(a)/sizeof(a[0]);
   int min;
 
   for(int i=0;i<n;i++){
      min=i;
    for(int j=i;j<n;j++){
        if(a[min]>=a[j]){
            min=j;
        }
    }

    swap(&a[min],&a[i]);
    
     
   }
   for(int k=0;k<n;k++){
    printf("%d\n",a[k]);
   }
   return 0;
}
=======================================================================================================================================================
#include<stdio.h>
#include<string.h>
int main()
{
   char a[]="gadag";
   int len=0;
    for(int i=0;a[i];i++){
        len++;
    }
    int status=0;
     for(int i=0;i<len/2;i++){
         if(a[i]!=a[len-i-1]){
            status=1;
            break;
         }
      }
      if(status==0){
         printf("palindrome");
      }
      else{
         printf("Not");
      }
     
     
   return 0;
}
===========================================================================================================================================
Anagram--------------------
#include<stdio.h>
int main()
{
   char a1[]="angel";
   char a2[]="glean";
   int len1=0;
   int len2=0;
   int count1=0;
   for(int i=0;a1[i];i++){
      len1++;
   }
   for(int i=0;a2[i];i++){
      len2++;
   }
   if(len1==len2){
      for(int i=0;i<len1;i++){
         for(int j=0;j<len2;j++){
            if(a1[i]==a2[j]){
               count1++;
            }
         }
      }

   }
   if(count1==len1){
      printf("anagram\n");
   }
   else{
      printf("Not anagram\n");
   }
   return 0;

}
============================================================================================================================
Jugling Algorithm--------------------------------
#include<stdio.h>
int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}
void leftRoatate(int a[],int n,int k){
    int i,j,d,temp;
    int sets=gcd(n,k);

    for(i=0;i<sets;i++){
        j=i;
        temp=a[i];

        while(1){
            d=j+k;
            if(d>=n){
                d=d-n;
            }
            if(d==i){
                break;
            }
            a[j]=a[d];
            j=d;
        }
        a[j]=temp;
    }
}
int main()
{
   int arr[50];
   int i,n,k;
   printf("Enter the sixe:\n");
   scanf("%d",&n);

   printf("Enter Array elemets:\n");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("Enter Rotation:\n");
   scanf("%d",&k);

   printf("Enter the Rotation:\n");
   for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
   }
    leftRoatate(arr,n,k);
    printf("After Rotation:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
   return 0;
}
=====================================================================================================================================
find the sub array with give sum 
===========================================================================================================================================
//string concatination using pointers
#include<stdio.h>
void concat(char *p,char *q){
   while(*p)
     p++;
   while(*p++=*q++);
   
}
int main()
{
   char s1[100];
   char s2[100];
   scanf("%s",s1);
   scanf("%s",s2);
   concat(s1,s2);
   printf("%s",s1);
   return 0;
}
================================================================================================================================================================
//program to string copy using pointers
#include<stdio.h>
void copy(char *p,char *q){
   while(*q++=*p++);
}
int main()
{
   char s1[100];
   char s2[100];
   scanf("%s",s1);
   copy(s1,s2);
   printf("%s",s2);
   return 0;
}
===================================================================================================================================================================
//to print reverse string using recursion
#include<stdio.h>
void reverse(char *p){
   if(*p){
      reverse(p+1);
      putchar(*p);
   }
}
int main()
{
   char s1[100];
   printf("Enter the string\n");
   scanf("%s",s1);
   reverse(s1);
   return 0;
}
=================================================================================================================================================================
//  find the frequency of the character
#include<stdio.h>
#include<stdlib.h>
void frequency(char *p,int A,int a){
   int count=0;
   while(*p){
      if(*p==A || *p==a){
         count++;
      }
      p++;
   }
   if(count){
      printf("%c(%d)",A,count);
   }
}
int main()
{
   char *p=(char *)malloc(100*sizeof(char));
   int A=65; 
   int a=97;

   printf("Enter the string:\n");
   scanf("%[^\n]s",p);

   for(;A<=90;A++,a++){
      frequency(p,A,a);
   }
   return 0;
}
===============================================================================================================================================================
//find frequency of letter in a given sequence
#include<stdio.h>
#include<stdlib.h>
int main()
{
   char *p=(char *)malloc(100*sizeof(char));
   int count[26]={0};

   printf("Enter the String:\n");
   scanf("%[^\n]s",p);

   for(int i=0;p[i];i++){
      if(p[i]>=65 && p[i]<=90){
         count[p[i]-'A']++;
      }
      else if(p[i]>=97 && p[i]<=122){
         count[p[i]-'a']++;
      }
   }
   for(int i=0;p[i];i++){
      if(p[i]>=65 && p[i]<=90){
         if(count[p[i]-'A']>0){
            printf("%c(%d)",p[i],count[p[i]-'A']);
            count[p[i]-'A']=0;
         }
      }
         else if(p[i]>=97 && p[i]<=122){
            if(count[p[i]-'a']>0){
               printf("%c(%d)",p[i],count[p[i]-'a']);
               count[p[i]-'a']=0;
            }
         }

      
   }
   return 0;
}
============================================================================================================================
//write a program to reverse words in a given string
#include<stdio.h>
#include<stdlib.h>
int rev_word(char *q){
    int z=*q==' '?0:*q=='\0'?0:rev_word(q+1)+1;
    if(z)
        putchar(*q);
    return z;
}
int main()
{
   char *p=(char *)malloc(100*sizeof(char));
   int a;

   printf("Enter the String:\n");
   scanf("%[^\n]s",p);
   
   while(*p && p){
       a=rev_word(p);
       p=p+a;

       if(*p==' '){
        putchar(' ');
        p++;
       }
   }

   return 0;
}
========================================================================================================================================
//void pointer
#include<stdio.h>
int main()
{
   void *p;
   p=10;
   printf("%d",(int*)p);
   return 0;
}

==============================================================================================================================================
//NULL pointer
#include<stdio.h>
int main()
{
   int *p=NULL;
   int a=20;
   p=&a;
   printf("%d",*p);
   return 0;
}
==============================================================================================================================================
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
=============================================================================================================================================
basic linked list----------------------------------------------------------------------------------------------------------------------------
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


================================================================================================================================================
stack using static memory-------------------------
#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int x){
    if(top==N-1){
        printf("Stack is Full");
    }
    else{
        top++;
        stack[top]=x;
    }

}
void pop(){
    int ele;
    if(top==-1){
        printf("The stack is underflow");
    }
    else{
        ele=stack[top];
        top--;
        printf("%d is poped out of the stack\n",ele);
    }
}
void peek(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("%d is top element in the stack\n",stack[top]);
    }
}
void display(){
    int i;
    if(top==-1){
        printf("stack is empty\n");
    }
    for(i=top;i>=0;i--){
            printf("%d\t",stack[i]);
     }
}
int main()
{
  
   push(10);
   push(11);
   push(12);
   push(13);
   push(14);
   pop();
   peek();
   display();
   return 0;
}
=================================================================================================================================================================
//stack using dynamic memory-------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

}; 

void push(struct node **s_ref,int x){
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=(*s_ref);
    (*s_ref)=new_node;
}
int pop(struct node **s_ref){
    int ele;
    struct node *temp=(*s_ref);
    (*s_ref)=(*s_ref)->next;
    ele=temp->data;
    free(temp);
    return ele;

}
void display(struct node *n){
      while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
      }
}
int main()
{

   struct node *stack=NULL; 
   push(&stack,10);
   push(&stack,20);
   push(&stack,30);
   printf("%d is poped\n",pop(&stack));
   display(stack);
   
   return 0;
}
================================================================================================================================================================
//queues using static memory allocation
#include<stdio.h>
#define N 5
int queues[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==N-1){
       printf("The queue is full");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queues[rear]=x;
    }
    else{
        rear++;
        queues[rear]=x;
    }
}
void dequeue(int x){
    if(front==-1 && rear==-1){
        printf("The stack is empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    printf("The dequeued element is %d",queues[front]);
    front++;
}
void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("The queue is empty");
    }
    else{
        for(i=0;i<rear+1;i++){
            printf("%d\n",queues[i]);
        }
    }
}
void peek(){
    printf("The peek element is %d",queues[front]);
}
int main()
{
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   dequeue(10);
   display()
   peek();

   return 0;
}
=================================================================================================================================================================
//queues using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x){
    struct node*new_node=(struct node*)malloc(sizeof(struct node*));
    new_node->data=x;
    new_node->next=0;
    if(front==0 && rear==0){
        front=rear=new_node;
    }
    else{
        rear->next=new_node;
        rear=new_node;
    }
}
void display(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("The queue is empty");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }

}
void dequeue(int x){
    struct node*temp=NULL;
    if(front==0 && rear==0){
        printf("The queue is empty");
    }
    else{
        temp=front;
        front=temp->next;
        printf("The dequeued element is %d\n",*temp);
        free(temp);
    }
}
void peek(){
    printf("The peek element is %d\n",*front);
}
int main()
{
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   dequeue(10);
   dequeue(20);
   peek();
   display();
   return 0;
}
===============================================================================================================================================================