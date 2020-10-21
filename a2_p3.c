#include <stdio.h>

   int main() {
      int int1,int2,int3;
      printf("Enter the number of weeks:");
      scanf("%d",&int1);
      printf("Enter the number of days:");
      scanf("%d",&int2);
      printf("Enter the number of hours:");
      scanf("%d",&int3);
      int1=int1*7*24;
      int2=int2*24;
      printf("The number of hours are=%d",int1+int2+int3);   
     return 0;
   }