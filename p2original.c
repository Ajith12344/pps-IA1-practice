#include<stdio.h>
int input()
{
  int num;
  printf("enter a num\n");
  scanf("%d",&num);
  return num;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  return a;
  else if(b>c)
  return b;
  else return c;

  
}
void output(int a,int b,int c,int largest)
{
  printf("largest of %d and %d and %d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,d;
 a=input();
 b=input();
 c=input();
 d=cmp(a,b,c);
 output(a ,b,c,d);
 return 0;
}
