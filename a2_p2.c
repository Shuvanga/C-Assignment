#include <stdio.h>

   int main() {
       char ch;
       printf("Enter a character:");
       scanf("%c",&ch);
       printf("character=%c\n",ch);
       printf("decimal=%d\n",ch);
       printf("octal=%o\n",ch);
       printf("hexadecimal=%x\n",ch);
     return 0;
   }