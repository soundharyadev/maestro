#include<stdio.h>
void main()
{
char c;
printf("enter the letter:");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
printf("  %c the letter is alphabet:",c);
else
printf("  %c the letter is not alphabet:",c);
}
