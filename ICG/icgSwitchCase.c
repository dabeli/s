# include<stdio.h>
# include<stdlib.h>
# include<string.h>

char sw[10][30],code[30],code1[30];
int ch,i,n,addr;//

void main()
{
        printf("Enter no. of cases : ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("Case %d : ",i+1);
            scanf("%s",sw[i]);
        }
        printf("\nThree Address code is:\n");
        addr=100;//
        for(i=0;i<n;i++)
        {
            printf("\n%d. if ch=%d goto L%d",addr++,i+1,i+1);//
        }

        for(i=0;i<n;i++)
        {
            printf("\n%d. L%d: t%d:= %s",addr++,i+1,i+1,&sw[i][2]);////
            printf("\n%d. %c:= t%d",addr++,sw[i][0],i+1);////
            printf("\n%d. goto Last",addr++);//
        }
        printf("\n%d. Last:\n",addr++);//

}
/*output:
Enter no. of cases : 5
Case 1 : c=a+b
Case 2 : d=a-b
Case 3 : e=a*b
Case 4 : f=a/b
Case 5 : g=a^b

Three Address code is:

100. if ch=1 goto L1
101. if ch=2 goto L2
102. if ch=3 goto L3
103. if ch=4 goto L4
104. if ch=5 goto L5
105. L1: t1:= a+b
106. c:= t1
107. goto Last
108. L2: t2:= a-b
109. d:= t2
110. goto Last
111. L3: t3:= a*b
112. e:= t3
113. goto Last
114. L4: t4:= a/b
115. f:= t4
116. goto Last
117. L5: t5:= a^b
118. g:= t5
119. goto Last
120. Last:
*/
