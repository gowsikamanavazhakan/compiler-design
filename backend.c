#include <stdio.h > 
#include <stdio.h >
#include<conio.h>
#include <string.h >
  int main() {
    char icode[10][30], str[20], opr[10];
    int i = 0;
    printf("\n Enter the set of intermediate code (terminated by exit):\n");
    do
    {
      scanf("%s", icode[i]);
    } while (strcmp(icode[i++], "exit") != 0);
    printf("\n target code generation");
    printf("\n************************");
    i = 0;
    do {
      strcpy(str, icode[i]);
      switch (str[3]) {
      case '+':
        strcpy(opr, "ADD ");
        break;
      case '-':
        strcpy(opr, "SUB ");
        break;
      case '*':
        strcpy(opr, "MUL ");
        break;
      case '/':
        strcpy(opr, "DIV ");
        break;
      }
      printf("\n\tMov %c,R%d", str[2], i);
      printf("\n\t%s%c,R%d", opr, str[4], i);
      printf("\n\tMov R%d,%c", i, str[0]);
    } 
	while (strcmp(icode[++i], "exit") != 0);
}

OUTPUT:
 Enter the set of intermediate code (terminated by exit):
a=a+b
b=g+h
c=a-n
a=c*a
exit

 target code generation
************************
        Mov a,R0
        ADD b,R0
        Mov R0,a
        Mov g,R1
        ADD h,R1
        Mov R1,b
        Mov a,R2
        SUB n,R2
        Mov R2,c
        Mov c,R3
        MUL a,R3
        Mov R3,a
