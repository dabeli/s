#include<stdio.h>
#include<conio.h>
void before_optimise()
{
    float r,pi=3.14;
    printf("\nEnter the value of radius:");
    scanf("%f",&r);
    printf("\nThe Area of circle is:%f",(2*pi*r));
    printf("\nThe Circumference of circle is:%f",(pi*r*r));
}
void after_optimise()
{
    float r,pi=3.14,t;
    printf("\nEnter the value of radius:");
    scanf("%f",&r);
    t=pi*r;//Common subexpression
    printf("\nThe Area of circle is:%f",(2*t));
    printf("\nThe Circumference of circle is:%f",(t*r));
}
void main()
{
    before_optimise();
    after_optimise();
}
