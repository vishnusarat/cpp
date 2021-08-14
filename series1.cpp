#include<stdio.h>
int main()
{
	int l=1,s=1,n;
	printf("enter value for n");
	scanf("%d",&n);
	printf("1");
	while(l<=n)
	{
	printf(",");
	s=s+l;
    printf("%d",s);
    l++;  	
	}
	return 0;	
}
