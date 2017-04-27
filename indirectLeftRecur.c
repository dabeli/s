#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,pos,index[30][30]={{0}},i,j,k,l,p[10]={0},m,o,s,v,alpha[10]={0},beta[10]={0},index_direct[20]={0} ;
	char productions[50][50],start_symbol='S',non_terminal;

	printf("Enter number  of productions:");
	scanf("%d",&n);
	printf("\nEnter the productions:\n");
	for(i=0;i<n;i++)
		{   
			k=0;
			scanf("%s",productions[i]);
			//index[i][k]=2;
			for(j=0,k=0;j<strlen(productions[i]);j++)
			{
				if(productions[i][j]=='|')
				{
					index[i][k]=j-3;
					k++;
				}
			}
		}
		


		for(i=1;i<n;i++)
		{
			j=0;k=0; v=0;
			while(index[i][j]!=0)
			{
				if(start_symbol == productions[i][index[i][j]+1])
				{
					productions[n][0] = productions[i][0];
					productions[n][1] = '-';
					productions[n][2] = '>';
					p[v]=index[i][j]+1;
					v++;
				}
				j++;
			}

			v=0; o=2;
			//p[0]=6 is stored
			while(p[v]!=0)
				{	l=0;
					while(index[0][l]!=0)
					{
						for(m=index[0][l]+1;productions[0][m]!='|';m++)
							productions[n][++o]=productions[0][m];
						for(m=p[v]+1;productions[i][m]!='|';m++)
							productions[n][++o]=productions[i][m];
						productions[n][++o]='|';
						l++;
					}
					v++;
				}

				





				l=0;
			
				while(index[i][l]!=0)
				{
					if(productions[i][index[i][l]+1]!=start_symbol)
					{
						for(m=index[i][l]+1;productions[i][m]!='|';m++)
							productions[n][++o]=productions[i][m];
						productions[n][++o]='|';
					}
					l++;
				}
			}



			printf("\nNew production after removing indirect recursion:");
			for(i=0;i<50;i++)
				printf("%c",productions[n][i]);
			

			




			printf("\nAfter removing left recursion:");
			index_direct[0]=2;
			for(i=0,k=1;i<strlen(productions[n])-1;i++)
			{
				if(productions[n][i]=='|')
					{	index_direct[k]=i;
						k++;
					}
			}


				non_terminal = productions[n][0];
				pos=0;k=0;l=0;
				
				while(index_direct[pos]!=0)
				{
					if(productions[n][index_direct[pos]+1] == non_terminal)
					{
						alpha[k]=index_direct[pos];
						k++;
					}
					else
					{
						beta[l]=index_direct[pos];
						l++;
					}
					pos++;
				}
				s=0;
				printf("\n%c->",non_terminal);
				while(beta[s]!=0)
				{
					for(i = beta[s]+1;productions[n][i]!='|';i++)
						printf("%c",productions[n][i]);
					printf("%c'|",non_terminal);
					s++;
				}
				s=0;
				printf("\n%c'->",non_terminal);
				while(alpha[s]!=0)
				{
					for(i = alpha[s]+2;productions[n][i]!='|';i++)
						printf("%c",productions[n][i]);
					printf("%c'|",non_terminal);
					s++;
				}
			
				return 0;
			}
