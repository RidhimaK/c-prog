#include <stdio.h>
void input(int n, int a[n], int i)
{
{
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter the terms\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
}
int add(int n,int i,int sum)
{
    sum=0;
    int a[i];
    for (int i=0;i<n;i++)
    sum=sum+i;
    return sum;
}
void output(int sum)
 {
      printf("The sum of n numbers= %d\n",sum);
}
  int main()
  {
    int n,i,sum,a[n];
      input(n,i,a[n]);
      add(n,i,sum);
      output(sum);
    
 }
}
