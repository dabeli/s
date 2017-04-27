#include<stdio.h>
#include<conio.h>
void before_movement()
{
    int a,b,c;
    printf("\nBefore Code movement Optimization\n");
    printf("Enter the values of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        a=b*c;
        printf("\nIn this case a < b therefore a=b*c \n%d",a);
    }
    else
    {
        a=b*c;
        b=a;
        printf("\nThe value of new a and new b is\n%d %d",a,b);
    }
}
void after_movement()
{
    int a,b,c,t1;
    printf("\nAfter code movement optimization\n");
    printf("\n Enter the values of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    t1=b*c;
    if(a<b)
    {
        a=t1;
        printf("\nIn this case a < b therefore a=b*c \n%d",a);
    }
    else
    {
        a=t1;
        b=a;
        printf("\nThe new values of a and b are as follows\n%d %d",a,b);
    }
}
void main()
{
    before_movement();
    after_movement();

}

