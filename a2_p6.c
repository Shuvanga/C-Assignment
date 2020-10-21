#include <stdio.h>

   int main() {
       double x,y;
       printf("Enter two doubles:");
       scanf("%lf",&x);
       scanf("%lf",&y);
       double *ptr_one=&x;
       double *ptr_two=&x;
       double *ptr_three=&y;
       printf("Pointer one=%p\n",ptr_one);
       printf("Pointer two=%p\n",ptr_two);
       printf("Pointer three=%p\n",ptr_three);
       return 0;
   }