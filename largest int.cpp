#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value for a ");
	scanf("%d",&a);
	printf("\nenter value for b ");
	scanf("%d",&b);
	printf("\nenter value for c ");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("\n a is the largest number ");
	}
	else if(b>a&&b>c)
	{
		printf("\n b is largest number");
	}
	else
	printf("\n c is largest number");
    return 0;
	
}
