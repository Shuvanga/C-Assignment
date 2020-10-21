#include <stdio.h>

   int main() {
       double double1,double2;
       printf("Enter two doubles:");
       scanf("%lf",&double1);
       scanf("%lf",&double2);
       printf("sum of doubles=%lf\n",double1+double2);
       printf("difference of doubles=%lf\n",double1-double2);
       printf("square=%lf\n",double1*double1);
       int int1,int2;
       printf("Enter two integers:");
       scanf("%d",&int1);
       scanf("%d",&int2);
       printf("sum of integers:%d\n",int1+int2);
       printf("product of integers:%d\n",int1*int2);
       char char1,char2;
       printf("Enter two characters:");
       getchar();
       scanf("%c",&char1);
       getchar();
       scanf("%c",&char2);
       printf("sum of chars=%d\n",char1+char2);
       printf("product of chars=%d\n",char1*char2);
       printf("sum of chars=%c\n",char1+char2);
       printf("product of chars=%c\n",char1*char2);
     return 0;
   }
