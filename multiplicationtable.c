#include <stdio.h>
 
void main()
{
    int i,n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Table of %d is:\n", n);
    
    for(i=1;i<=10;++i)
        printf("\n%d*%d=%d",n,i,n*i);
 
    
}
