#include<stdio.h>
#include<string.h>
int main()
{
	char b[100];
	int i=0,j=0,k;
	printf("Enter Expression:");
	scanf("%s",b);
	printf("String %s\n",b);

	while(b[i]!='\0')
	{
		if(b[i]=='!')
		{
			printf("t%d=%c%c\n",j,b[i],b[i+1]);
			j++;
			b[i]='t';
			b[i+1]=(char)(j+47);
		}
		i++;
	}
	i=0;
	while(b[i]!='\0')
	{
		if(b[i]=='&')
		{
			if(b[i-2]!='t' && b[i+1]!='t')
			{
				printf("t%d=%c%c%c\n",j,b[i-1],b[i],b[i+1]);
				b[i-1]='t';
				b[i]=(char)(j+48);
				for(k=i+1;k<strlen(b);k++)
				{
					b[k]=b[k+1];
				}
			}
			else if(b[i-2]=='t' && b[i+1]=='t')
			{
				printf("t%d=%c%c%c%c%c\n",j,b[i-2],b[i-1],b[i],b[i+1],b[i+2]);
				b[i-2]='t';
				b[i-1]=(char)(j+48);
				for(k=i;k<strlen(b);k++)
				{
					b[k]=b[k+1];
				}
			}
			else if(b[i-2]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-2],b[i-1],b[i],b[i+1]);
				b[i-2]='t';
				b[i-1]=(char)(j+48);
				for(k=i;k<strlen(b);k++)
				{
					b[k]=b[k+1];
				}
			}
			else if(b[i+1]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-1],b[i],b[i+1],b[i+2]);
				b[i-1]='t';
				b[i]=(char)(j+48);
				for(k=i+1;k<strlen(b);k++)
				{
					b[k]=b[k+1];
				}
			}
			j++;
		}
		i++;
	}
	i=0;
	while(b[i]!='\0')
	{
		if(b[i]=='|')
		{
			if(b[i-2]!='t' && b[i+1]!='t')
			{
				printf("t%d=%c%c%c\n",j,b[i-1],b[i],b[i+1]);
				b[i-1]='t';
				b[i]=(char)(j+48);
				for(k=i+1;k<strlen(b);k++)
				{
					b[k]=b[k+1];
				}
			}
			else if(b[i-2]=='t' && b[i+1]=='t')
			{
				printf("t%d=%c%c%c%c%c\n",j,b[i-2],b[i-1],b[i],b[i+1],b[i+2]);
				b[i-2]='t';
				b[i-1]=(char)(j+48);
				for(k=i;k<strlen(b);k++)
				{
					b[k]=b[k+1];
				}
			}
			else if(b[i-2]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-2],b[i-1],b[i],b[i+1]);
				b[i-2]='t';
				b[i-1]=(char)(j+48);
				for(k=i;k<strlen(b);k++)
				{
					b[k]=b[k+1];
				}
			}
			else if(b[i+1]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-1],b[i],b[i+1],b[i+2]);
				b[i-1]='t';
				b[i]=(char)(j+48);
				for(k=i+1;k<strlen(b);k++)
				{
					b[k]=b[k+1];
				}
			}
			j++;
		}
		i++;
	}
	return 0;
}

/*OUTPUT:
Enter Expression:a|b&!c
a|b&!c
t0=!c
t1=b&t0
t2=a|t1
*/
