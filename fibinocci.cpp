#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i=1,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);
 do   
 {  
  i++ ; 
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 } 
 while(i<number);
  return 0;  
 }    
