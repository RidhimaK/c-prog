#include <stdio.h>
void input(int*a,int*b,int*c)
{
    printf("Enter first number\n");
    scanf("%d",a);
    printf("Enter second number\n");
    scanf("%d",b);
    printf("Enter third number\n");
    scanf("%d",c);
}
int compare(int a, int b, int c)
{
    int small;
    if(a<b)
    {
        if(a<c)
        small=a;
    }
    if(b<c)
    {
        if (b<a)
        small=b;
    }
    if(c<a)
    {
        if(c<b)
        small=c;
    }
    return small;
}
void output(int small)
{ 
    printf("The smallest numbers is %d",small);
}
void main()
{
    int a,b,c,small;
    input(&a,&b,&c);
    small=compare(a,b,c);
    output(small);
}
