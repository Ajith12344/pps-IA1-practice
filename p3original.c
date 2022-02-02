#include<stdio.h>
int input_n()
{
 int a;
 printf("enter a num\n");
 scanf("%d",&a);
 return a;
}
int sum_n(int n)
{
  int i,sum;
  for(i=0;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
 printf("addition of n %d numbers is %d\n",n,sum);
}
int main()
{
 int n,sum;
 n=input_n();
 sum=sum_n(n);
 output(n,sum);
 return 0;
}