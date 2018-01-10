#include <stdio.h>
 
void main()
{
    int i,n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("multiple %d is:\n", n);
    
    for(i=1;i<=5;++i)
        printf("\n%d*%d=%d",n,i,n*i);
 
    
}
