#include<stdio.h>
void main()
{
int n1, n2, n3;
printf("enter the three numbers:");
scanf("%d%d%d",&n1,&n2,&n3);
if((n1>n2)||(n1>n3))
printf(" n1 %d  is greatest:",n1);
scanf("%d",&n1)
else if(n2>n3)
printf("n2 %d is greatest:",n2);
else
printf("n3 %d is greatest:",n3);
}
