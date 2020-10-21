#include <stdio.h>

   int main() {
       char ch;
       scanf("%c",&ch);
       if ((ch>='a' && ch<='z') || (ch>='A' && ch<='z')){
           printf("%c is a letter",ch);
       }
       else if(ch>='0' && ch<='9'){
           printf("%c is a digit",ch);
       }
       else{
           printf("%c is some other symbol",ch);
       }
       return 0;
   }