#include<stdio.h>
void main()
{
char c;
int lvowel, uvowel;
printf("enter a letter:");
scanf("%c",&c);
lvowel=(c=='a'|| c=='e'|| c=="i"|| c=='o'|| c=='u');
uvowel=(c=='A"|| c=='E'|| c=='I'|| c=='O'|| c=='U');
if(lvowel||uvowel)
printf("  %c letter is vowel",c );
else
printf("%c letter is consonant",c);
}
