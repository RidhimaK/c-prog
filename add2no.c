#include<stdio.h>
void getinput(int *a,int *b)
{
     printf("Enter the value of first number");
     scanf("%d",a);
     printf("Enter the value of second number");
     scanf("%d",b);

}
int addtn(int a,int b)
{
     int c;
     c=a+b;
     return c;
}
void getoutput(int a,int b,int c)
{
     printf("%d+%d=%d",a,b,c);
    

}
void main()
{
     int a,b,c;
     getinput(a,b);
     c=a+b;
     getoutput(a,b,c);
}

