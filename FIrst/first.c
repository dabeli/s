
#include<stdio.h>
#include<string.h>
char gram[20][20];
char fir[10];
int n,j=0;
void first(char c,int m)
{
	int i,k;
	char x,y;
	for(i=0;i<n;i++)
	{
		if(c==gram[i][0])
		{
			 if(m==0)
			{
				for(k=4;k<strlen(gram[i]);k++)
				{
					if(gram[i][k]=='|')
						first(gram[i][0],k+1);
				}
			}
			if(m==0)
				x=gram[i][3];
			else
				x=gram[i][m];
			if (x>='a'&&x<='z')
			{
				fir[j]=x;
				j++;
			}
		       else {first(x,0);}
		}
	}
}


void main()
{
	int i;
	char c,f;
	printf("Enter no of prods:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter productions\n");
		scanf("%s",gram[i]);
	}
	for(i=0;i<n;i++)
		printf("\n%s",gram[i]);

	printf("\nEnter Variable:");
	fflush(stdin);
	scanf("%c",&c);
	first(c,0);
	for(i=0;i<strlen(fir);i++)
		printf("\nFirst is %c",fir[i]);
	getch();
}

/*OUTPUT:
Enter no of prods:3
Enter productions
S->AB|f
A->b
B->Ac|h

S->AB|f
A->b
B->Ac|h
Enter Variable:S

First is f
First is b*/