//searching substring in main string
#include<stdio.h>
#include<string.h>
int main()
{
   char a1[]="Hero";
   char a2[]="er";
   int count=0;
   int len1=strlen(a1);
   int len2=strlen(a2);
   for(int i=0;i<=len2-1;i++){
      for(int j=0;j<=len1;j++){
         if(a2[i]==a1[j]){
            count++;
         }
      }
   }
   if(count==2){
      printf("substring is found in main string");
   }
   else{
      printf("substring is not found");
   }
   return 0;
}