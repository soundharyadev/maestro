#include<stdio.h>
int main()
{
int n, count;
printf("enter the numbers:");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("the digits in an integer is %d:");
return 0;
}
