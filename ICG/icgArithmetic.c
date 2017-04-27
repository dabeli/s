#include<stdio.h>
#include<string.h>
int main()
{
	char b[100];
	int i=0,j=0,k;
	printf("Enter Expression:");
	scanf("%s",b);
	printf("String %s\n",b);

	for(i=0;b[i]!='\0';++i)
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
			//printf("%s\n", b);
			j++;
		}
	}

	for(i=0;b[i]!='\0';++i)
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
				for(k=i;k<strlen(b)-2;k++)//
				{
					b[k]=b[k+3];//
				}
				//printf("*double t case :%s\n",b );
			}
			else if(b[i-2]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-2],b[i-1],b[i],b[i+1]);
				b[i-2]='t';
				b[i-1]=(char)(j+48);
				for(k=i;k<strlen(b)-1;k++)//
				{
					b[k]=b[k+2];//
				}
				//printf("*single t first case :%s\n",b );
			}
			else if(b[i+1]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-1],b[i],b[i+1],b[i+2]);
				b[i-1]='t';
				b[i]=(char)(j+48);
				for(k=i+1;k<strlen(b)-1;k++)//
				{
					b[k]=b[k+2];//
				}
				//printf("* single t second case : %s\n",b);
			}
			j++;
		}
	}

	for(i=0;b[i]!='\0';++i)
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
				for(k=i;k<strlen(b)-2;k++)//
				{
					b[k]=b[k+3];//
				}
			}
			else if(b[i-2]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-2],b[i-1],b[i],b[i+1]);
				b[i-2]='t';
				b[i-1]=(char)(j+48);
				for(k=i;k<strlen(b)-1;k++)//
				{
					b[k]=b[k+2];//
				}
			}
			else if(b[i+1]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-1],b[i],b[i+1],b[i+2]);
				b[i-1]='t';
				b[i]=(char)(j+48);
				for(k=i+1;k<strlen(b)-1;k++)//
				{
					b[k]=b[k+2];//
				}
			}
			j++;
		}
	}

	for(i=0;b[i]!='\0';++i)
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
				for(k=i;k<strlen(b)-2;k++)//
				{
					b[k]=b[k+3];//
				}
			}
			else if(b[i-2]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-2],b[i-1],b[i],b[i+1]);
				b[i-2]='t';
				b[i-1]=(char)(j+48);
				for(k=i;k<strlen(b)-1;k++)//
				{
					b[k]=b[k+2];//
				}
			}
			else if(b[i+1]=='t')
			{
				printf("t%d=%c%c%c%c\n",j,b[i-1],b[i],b[i+1],b[i+2]);
				b[i-1]='t';
				b[i]=(char)(j+48);
				for(k=i+1;k<strlen(b)-1;k++)//
				{
					b[k]=b[k+2];//
				}
			}
			j++;
		}
	}

	if(b[1]=='=')
	{
		printf("%c=t%d\n",b[0],j-1);
	}
	return 0;
}

/*Enter Expression:a=b/e*f+c/d-k  
String a=b/e*f+c/d-k
t0=b/e
t1=c/d
t2=t0*f
t3=t2+t1
t4=t3-k
a=t4
*/
