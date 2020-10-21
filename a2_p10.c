#include <stdio.h>

   int main() {
       int n;
       printf("Enter an integer");
       scanf("%d",&n);
       while(n<=0){
           printf("Enter an integer");
           scanf("%d",&n);
       }
       printf("1 day = 24 hours\n");
       int a=2;
       while(a<=n){
           printf("%d days = %d hours\n", a , a*24);
           a++;
       }
       return 0;
   }