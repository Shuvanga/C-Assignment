#include <stdio.h>

   int main() {
       int int1;
       scanf("%d",&int1);
       if ( int1%2==0 && int1%7==0){
           printf("The number is divisible by 2 and 7");
           }
       else{
           printf("The number is not divisible by 2 and 7");
       }
       return 0;
   }