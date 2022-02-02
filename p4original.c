#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;

}
void input_array(int n,int a[n])
{
  int i;
  printf("enter n numbers\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

}
int sum_n_arrays(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
  sum=sum+a[i];}
  return sum;

}
void out_put(int n ,int a[n],int sum)
{
  printf("The total sum is %d\n",sum);
}
int main()
{
  int n,b,sum;
  int a[b];
  n=input_array_size();
  input_array(n,a);
  sum= sum_n_arrays(n,a);
  out_put(n,a,sum);
  return 0;

}

