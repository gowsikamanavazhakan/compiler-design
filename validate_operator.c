#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int i;
	printf("enter : ");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='&'||s[i]=='|'||s[i]=='%'||s[i]=='=')
	    {
		    printf("\n%c valid operator",s[i]);
	    }
	    else
	    {
		    printf("\n%c invalid operator",s[i]);
	    } 
	}
	
}

OUTPUT:
enter : +
+ valid operator

enter : 7h
7 invalid operator
h invalid operator
