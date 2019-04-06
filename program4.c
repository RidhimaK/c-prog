#include <stdio.h>
void input(int n, int a[n]
{
    printf("Enter the number of terms\n");
    scanf("%d",n);
    printf("Enter the terms\n");
    for(i=0,i<n,i++)
    scanf("%d",a[i]);
}
int compute(int n,int a[100],int i,int sum)
{
    sum=0;
    for (i=0;i<n;i++)
    sum=sum+i;
    return sum;
}
void output(int sum)
  printf("The sum of n numbers= %d\n",sum);
  }
  void main()
  {
    int n, int i, int a[100], int sum;
      input(n,i,a[100]);
      compute(n,a(100),&sum);
      output(sum);

  }

}



}
