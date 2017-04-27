#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char id[10];
	char key[][10]={{"int"},{"float"},{"double"},{"char"},{"if"},{"do"},{"for"},{"while"},{"else"}};
	char sep[10]={'{','}','(',')',';',','};
	char op[10]={'-','+','*','/','<','>','='};
	char ch[10]={0};
	int i,j,k,parsed,keylen;
	int co=0,ck=0,cs=0,cc=0,ci=0;
	FILE *fp1,*fp2;
	keylen=sizeof(key)/sizeof(key[0]);
	printf("//This program needs space & case sensitive input !! \nParsing tokens...\nType\t\tCount\n");
	fp1=fopen("ProgramFile.txt","r");
	fp2=fopen("TokenFile.txt","w");
	while(fscanf(fp1,"%s",ch)!=EOF)
	{
		parsed=0;
		ch[strlen(ch)]=0;
		//printf("\n%s",ch);
		for(i=0;i<strlen(op)&&parsed==0;i++)
		{
			if(strstr(op,ch))                                 //strstr: finds ist occurance of str2 in str1
			{
				++co;
				fprintf(fp2,"%c\tOperator\n",ch[0]);
				parsed=1;
				break;
			}
		}
		for(i=0;i<keylen&&parsed==0;i++)
		{
			if(strstr(ch,key[i]))
			{
				++ck;
				fprintf(fp2,"%s\tKeyword\n",ch);
				parsed=1;
				break;
			}
		}
		for(i=0;i<strlen(sep);i++)
		{
			if(strstr(sep,ch))
			{
				++cs;
				fprintf(fp2,"%c\tSeparator\n",ch[0]);
				parsed=1;
				break;
			}
		}
		for(i=0;isdigit(ch[0])&&parsed==0;i++)
		{
			++cc;
			fprintf(fp2,"%s\tConstant\n",ch);
			parsed=1;
			break;
		}
		if(parsed==0)
		{
			++ci;
			fprintf(fp2,"%s\tIdentifier\n",ch);
			parsed=1;
		}
	}
	printf("Operator\t%d\nKeyword\t\t%d\nSeparator\t%d\nConstant\t%d\nIdentifier\t%d\n",co,ck,cs,cc,ci );
	printf("Total Tokens = %d \n",co+ck+ci+cc+cs);
	fclose(fp2);
	fclose(fp1);
	return 0;
}