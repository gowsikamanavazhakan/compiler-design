#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {

char infix[100];
int temp_count = 1,i=0,j;

    printf("Enter an infix expression: ");
    scanf("%s", infix);
    printf("Three Address Code:\n");
    if (isalnum(infix[i])) {
            printf("t%d = %c %c %c \n", temp_count, infix[i],infix[i+1],infix[i+2]);
            printf("t%d = t%d  %c %c\n", temp_count+1, temp_count, infix[i+3], infix[i+4] );
            printf("t%d = t%d  %c %c\n", temp_count +2, temp_count+1, infix[i+5], infix[i+6] );

            }
            return 0;
}

OUTPUT:
Enter an infix expression: a+b+c
Three Address Code:
t1 = a + b
t2 = t1  + c
t3 = t2
