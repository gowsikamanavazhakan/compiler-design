#include<stdio.h>
int c=0;
char p[20];
void s();
void l();
void lprime();
void l()
{
	s();
	lprime();
}
void lprime()
{
	if(p[c]==',')
	{
		c++;
		s();
		lprime();
	}
}
void s()
{
	if(p[c]=='a')
	c++;
	else if(p[c]=='(')
	{
		c++;
		l();
		if(p[c]==')')
		c++;
		else
		c--;
	}
	else
	printf("\nInvalid Expression");
}
int main()
{
	printf("\nImplementation of RECURSIVE DESCENT PARSER\n");
	printf("\nEnter the Experssion:\n");
	scanf("%s",p);
	s();
	if(p[c]=='$')
	printf("\nThe String is accepted");
	else
	printf("\nThe string is rejected");
}

OUTPUT:
	
Implementation of RECURSIVE DESCENT PARSER

Enter the Experssion:
(a,a)$

The String is accepted
--------------------------------
Process exited after 642.8 seconds with return value 23
Press any key to continue . . .
