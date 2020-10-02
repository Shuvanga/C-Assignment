#include <stdio.h>

  int main() {
     int x = 17;
     int y = 4;
     printf("x= %d\n", x); /* Printing x */
     printf("y= %d\n", y); /* Printing y */
     printf("sum= %d\n", x+y); /* The sum of x and y */
     printf("product= %d\n", x*y); /* The product of x and y */
     printf("difference= %d\n", x-y); /* The difference of x and y */
     printf("division= %f\n", (float)x/(float)y); /* The quotient when x is divided by y */
     printf("remainder of division= %d\n", x%y); /* The remainder when x is divided by y */
     return 0;
  }
