#include<stdio.h>
char s[10][100],nt[10];
int check(char a[100])
{
	int i,ind=0,c=0;
	for(i=0;nt[i];i++){
	if(a[3]==nt[i])
	c=i;	
	}
	if(c>0)
	return check(s[c]);
	else{
		printf("%c ",a[3]);
		for(i=0;a[i];i++){
			if(a[i]=='|')
			ind=i;
			
		}
		if(a[ind+1]=='i' && a[ind+2]=='d')
		printf("%c%c",a[ind+1],a[ind+2]);
		else
		printf("%c",a[ind+1]);
	}
	return 0;
}
int main()
{
	int n,i,j,k;
	printf("\nenter the no of production : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nenter the production %d : ",i+1);
		scanf("%s",&s[i]);
		nt[i]=s[i][0];
	}
	for(i=0;s[i][0];i++){
		printf("\nFIRST(%c) : ",s[i][0]);
		printf(check(s[i]));
	}
}

OUTPUT:
	
	enter the no of production : 2

enter the production 1 : E->aA

enter the production 2 : A->bc

FIRST(E) : a -
FIRST(A) : b -
--------------------------------
Process exited after 15.77 seconds with return value 0
Press any key to continue . . .
