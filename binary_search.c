#include<stdio.h>

int main(){
    int arr[10];
    int num;
    int left = 0;
    int right = 10 - 1;
    int mid = 0;

    printf("Enter the elements of array: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &num);

    while(left <= right){
        mid = (left + right) / 2;
        if(arr[mid] == num){
            printf("The element %d found at index %d\n", num, mid);
            break; // Exit the loop once the element is found
        }
        else if(arr[mid] < num){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    if(left > right){
        printf("The element %d is not found in the array.\n", num);
    }

    return 0;
}
