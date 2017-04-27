//ICG
//While Loop

# include<stdio.h>
# include<stdlib.h>
# include<string.h>

char sw[10][30],code[30],code1[30],ex[30];
int ch,i,j,n,index;

void main()
{
        printf("\nEnter the conditional expression:");
        scanf("%s",ex);
        printf("\nEnter no. of lines of code in loop:");
        scanf("%d",&n);
        printf("\nEnter the code:");
        for(i=0;i<n;i++)
            scanf("%s",sw[i]);

        index=100;
        i=1;
        printf("\nTranslation scheme for while %s do...is",ex);

        printf("\n%d. L%d: if %s goto L%d",index++,i,ex,i+1);
        printf("\n%d. goto Last",index++);
        printf("\n%d. L%d: %s",index++,i+1,sw[0]);
        for(j=1;j<n;j++)
            printf("\n%d. %s",index++,sw[j]);

        printf("\n%d. goto L%d",index++,i);
        printf("\n%d. Last:",index++);

}

/*OUTPUT:
Enter the conditional expression:i<10

Enter no. of lines of code in loop:3

Enter the code:x=0
i=i+1
a=b

Translation scheme for while i<10 do...is
100. L1: if i<10 goto L2
101. goto Last
102. L2: x=0
103. i=i+1
104. a=b
105. goto L1
106. Last:
*/
