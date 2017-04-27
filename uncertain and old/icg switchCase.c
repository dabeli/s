//ICG
//Switch Cases

# include<stdio.h>
# include<stdlib.h>
# include<string.h>

char sw[10][30],code[30],code1[30];
int ch,i,n,index;

void main()
{
        printf("Enter no. of cases:\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("\nCase%d:",i+1);
            scanf("%s",sw[i]);
        }
        printf("\nThree Address code is:\n");
        index=100;
        for(i=0;i<n;i++)
        {
            printf("\n%d. if ch=%d goto L%d",index++,i+1,i+1);
        }

        for(i=0;i<n;i++)
        {
            printf("\n%d. L%d: t%d:= %s",index++,i+1,i+1,sw[i]);
            printf("\n%d. c:= t%d",index++,i+1);
            printf("\n%d. goto Last",index++);
        }
        printf("\n%d. Last:",index++);

}
/*OUTPUT:
Enter no. of cases:
3

Case1:c=a+b

Case2:c=a-b

Case3:c=a*b

Three Address code is:

100. if ch=1 goto L1
101. if ch=2 goto L2
102. if ch=3 goto L3
103. L1: t1:= c=a+b
104. c:= t1
105. goto Last
106. L2: t2:= c=a-b
107. c:= t2
108. goto Last
109. L3: t3:= c=a*b
110. c:= t3
111. goto Last
112. Last:
*/
