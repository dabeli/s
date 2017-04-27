#include<stdio.h>
#include<string.h>
typedef struct
{
    char key;
    char val[20];
}rule;

int main()
{
    int i,j,k,l,m,n,stlen;
    char ip[20]={0},st[20]={0},prod[20][20]={{0}};
    rule dict[20]={{0},{0}};
    printf("Enter no. of productions : ");
    scanf("%d",&n);

    printf("Enter productions :\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",prod[i]);
        dict[i].key=prod[i][0];
        for(j=3;j<strlen(prod[i]);j++)
            dict[i].val[j-3]=prod[i][j];
    }

    printf("\nEnter input : ");
    scanf("%s",ip);
    //printf("%s\n",ip);

    for(i=0,j=0;j<strlen(ip);i++,j++)
    {
    	printf("\nSHIFT %c\n",ip[j]);
        st[i]=ip[j];
        printf("Stack:\t$%s\n",st);
        printf("Input:\t%s\n",&ip[j+1]);

        ABC:
        for(k=1;k<n;k++)
        {
            stlen=strlen(st);
            for(m=0;m<stlen;m++)
            {
                if(!strcmp(&st[stlen-m-1],dict[k].val))
                    break;//reducible by kth production
            }
            if(m<stlen)
                break;//reducible
        }
        if(k==n)
        {
            continue;//not reducible
        }
        else
        {
            printf("REDUCE using %c->%s\n",dict[k].key,dict[k].val);
            for(l=0;l<strlen(dict[k].val);l++)
                st[i-l]='\0';
            i-=l;
            st[++i]=dict[k].key;
            printf("Stack:\t$%s\n",st);
            goto ABC;
        }
    }
    if(!strcmp(st,dict[0].val))
    {
            printf("\nREDUCE using %c->%s\n",dict[0].key,dict[0].val);
            for(l=0;l<strlen(dict[0].val);l++)
                st[l]='\0';
            st[0]=dict[0].key;
            printf("Stack:\t$%s\n",st);
            printf("\nSTRING ACCEPTED SUCCESSFULLY\n");
    }
    else
        printf("\nSTRING FAILED\n");

}
