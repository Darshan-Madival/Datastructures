#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5];
    int num;
    int count=0;
    printf("enter the five elements of array: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search: \n");
    scanf("%d",&num);
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            printf("element found at index %d",i);
            count++;
            
        }
    }
    if(count==0){
    printf("Element not found");
    }
    return 0;
}