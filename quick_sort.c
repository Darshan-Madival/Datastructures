#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partion(int a[],int lb,int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(start<=pivot){
            start++;
        }
        while(end>=pivot){
            end--;
        }
        if(start<end){
            swap(&a[start],&a[end]);
        }
    }
    swap(&a[lb],&a[end]);
    return end;

}
void quicksort(int a[],int lb,int ub){
    if(lb<ub){
         int loc=partion(a,lb,ub);
         quicksort(a,lb,loc-1);
         quicksort(a,loc+1,ub);
    }
}
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    quicksort(arr,0,10-1);
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
  

}