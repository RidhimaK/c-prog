#include<stdio.h>
void getinput(int *a,int *b)
{
     printf("Enter the value of first number");
     scanf("%d",a);
     printf("Enter the value of second number");
     scanf("%d",b);

}
void addtn(int a ,int b, int *c)
{
     
     *c=a+b;

}
void getoutput(int a,int b,int c)
{
     printf("%d+%d=%d",a,b,c);
    

}
int main()
{
     int a,b,c;
     getinput(&a,&b);
     addtn(a,b,&c);
     getoutput(a,b,c);
}
