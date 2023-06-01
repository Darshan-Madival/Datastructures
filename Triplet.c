#include <stdio.h>
#include<string.h>

int main()
{
    int a[]={1,2,3,4,5,6};
    int d;
    int len=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
    int count=0;
    printf("\nEnter the sum you want: ");
    scanf("%d",&d);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            for(int k=0;k<len;k++){
                if(d==a[i]+a[j]+a[k]){
                    printf("%d,%d,%d\n",a[i],a[j],a[k]);
                    count++;
                    break;
                }
            }
        }
    }
    if(count==0 && d<a[len-1]+a[len-1]+a[len-1]){
        printf("%d,%d,%d",d,0,0);
    }
    else{
        printf("Error");
    }
    return 0;
}
