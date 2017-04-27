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
		if(b[i]=='/')
		{
			printf("t%d=%c%c%c\n",j,b[i-1],b[i],b[i+1]);
			b[i-1]='t';
			b[i]=(char)(j+48);
			for(k=i+1;k<strlen(b);k++)
			{
				b[k]=b[k+1];
			}
			j++;
		}
		i++;
	}
	i=0;
	while(b[i]!='\0')
	{
		if(b[i]=='*')
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
		if(b[i]=='+')
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
	while(b[i]!='\0')
	{
		if(b[i]=='-')
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

	if(b[1]=='=')
	{
		printf("%c=t%d",b[0],j-1);
	}
	return 0;
}

/*OUTPUT:
Enter Expression:a=b*c+d/e
String a=b*c+d/e
t0=d/e
t1=b*c
t2=t1+t0
a=t2
*/

