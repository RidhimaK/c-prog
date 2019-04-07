#include <stdio.h>
void input1(int *n)
{
    printf("Enter the number of terms\n");
    scanf("%d",n);
}

 void input2(int n, int a[n])
    {
 printf("Enter the terms\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    }

int add(int n,int a[n])
{
    int sum=0;
    for (int i=0;i<n;i++)
    sum=sum+a[i];
    return sum;
}
void output(int n,int a[n], int z)
{
    for(int i=0;i<n-1;i++)
    {
    printf("%d+",a[i]);
    }
    printf("%d=%d",a[n-1],z);
}
  int main()
  {
    int n,z;
    input1(&n);
    int a[n];
    input2(n,a);
    z=add(n,a);
    output(n,a,z);
}   
