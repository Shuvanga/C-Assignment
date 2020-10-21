#include <stdio.h>

   int main() {
        int a;
        printf("Enter an ineteger:");
        scanf("%d",&a);
        printf("Entered integer=%d\n",a);
        int *ptr_a=&a;
        printf("Pointer address=%p\n",ptr_a);
        *ptr_a += 5;
        printf("Modified integer value=%d\n",*ptr_a);
        printf("Pointer address=%p\n",ptr_a);
       return 0;
   }