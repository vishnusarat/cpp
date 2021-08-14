#include<stdio.h>   
int main()  
{  
    int a[50],sum,i,n,c;  
    float avg;  
    printf("Enter limit");
	scanf("%d",&n);
	printf("Enter integer numbers\n");
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);  
  
    for(i = 0; i < n; i++)  
    {  
        sum = sum + a[i];  
    }  
    avg = sum / n; 
    printf("\nAverage of %d numbers: %f\n", n, avg);  
    for(i = 0; i < n; i++)  
    {
      c=a[i]*a[i]*a[i];
      printf("\n");
      printf("%d",c);
	  	
    }
    return 0;  
}
