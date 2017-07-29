#include<stdio.h>
void main()
{
int num, i, sum=0;
printf(" enter the integer:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum+=i;
}
printf("sum=%d",sum);
}
