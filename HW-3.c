#include <stdio.h>

   int main() {
     float result; /* The result of the division */
     int a = 5;
     float b = 13.5; /* The number entered is not an integer */
     result = a / b;
     printf("The result is %f\n", result); /* The formatting specifier was inappropiate so changed to floating point */
     return 0;
   }
