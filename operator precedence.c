#include <stdio.h>
int main() {
   int a = 20;
   int b = 10;
   int c = 15;
   int d = 5;
   int e;
   e = (a + b) * c / d;      
   printf("Value of (a + b) * c / d is : %d\n",  e );
   e = ((a + b) * c) / d;    
   printf("Value of ((a + b) * c) / d is  : %d\n" ,  e );
   e = (a + b) * (c / d);   
   printf("Value of (a + b) * (c / d) is  : %d\n",  e );
   e = a + (b * c) / d;     
   printf("Value of a + (b * c) / d is  : %d\n" ,  e );
   return 0;
}

OUTPUT:
Value of (a + b) * c / d is : 103
Value of ((a + b) * c) / d is  : 103
Value of (a + b) * (c / d) is  : 74
Value of a + (b * c) / d is  : 67
