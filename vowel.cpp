#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char alphabet;
    printf("Enter a alphabet \n");
    scanf("%c", &alphabet);
    alphabet = toupper(alphabet);
    if(alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
	{
	printf("it is a vowel");
	}
	else
	{
	printf("it is a consonant");
	}	
return 0;
}
