//ICG
//While Loop

# include<stdio.h>
# include<stdlib.h>
# include<string.h>

char sw[10][30],code[30],code1[30],ex[30];
int ch,i,j,n,addr;//

void main()
{
        printf("\nEnter the conditional expression:");
        scanf("%s",ex);
        printf("\nEnter no. of lines of code in loop:");
        scanf("%d",&n);
        printf("\nEnter the code:\n");
        for(i=0;i<n;i++)
            scanf("%s",sw[i]);

        addr=100;//
        i=1;
        printf("\nTranslation scheme for while %s do...is",ex);

        printf("\n%d. L%d: if %s goto L%d",addr++,i,ex,i+1);//
        printf("\n%d. goto Last",addr++);//
        printf("\n%d. L%d: %s",addr++,i+1,sw[0]);//
        for(j=1;j<n;j++)
            printf("\n%d. %s",addr++,sw[j]);//

        printf("\n%d. goto L%d",addr++,i);//
        printf("\n%d. Last:\n",addr++);//

}

/*OUTPUT:

Enter the conditional expression:a<b

Enter no. of lines of code in loop:3

Enter the code:
x=x*x
a=a-b
b=b+1

Translation scheme for while a<b do...is
100. L1: if a<b goto L2
101. goto Last
102. L2: x=x*x
103. a=a-b
104. b=b+1
105. goto L1
106. Last:

*/
