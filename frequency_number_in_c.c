//find the frequency of a charecter
#include<stdio.h>
#include<string.h>
int main()
{
   char str[]="battelground";
   int n=strlen(str);
   for(int i=0;i<n-1;i++){
      int count=0;
      for(int j=0;j<n-1;j++){
         if(str[i]==str[j]){
            count++;
         }
      }
      if(count){
         printf("%c is repeated %d times\n",str[i],count);
         
      }
   }
   return 0;
}