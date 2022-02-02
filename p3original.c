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
  for(int i=0;i<=n;i++)
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
 int a,b;
 a=input_n();
 b=sum_n();
 output(a,b);
 return 0;


}