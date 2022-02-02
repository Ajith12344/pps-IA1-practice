#include<stdio.h>
float input()
{
  float num;
  printf("enter a num\n");
  scanf("%f",&num);
  return num;
}
float my_sqrt(float n)
{
  float sum=0;
  float i;
 for(i=0;i<=n;i++)
 {
   sum=i*i;
 
 if(sum==n)
 return i;}
}
void output(float n,float sqrt_result)
{
  printf("sqrt of %f number is %f\n",n,sqrt_result);
}
int main()
{ 
  float n,sqrt_result;
   n=input();
   sqrt_result = my_sqrt(n);
   output(n,sqrt_result);
   return 0;
}
