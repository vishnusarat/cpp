#include<stdio.h>   
int main()  
     {  
      int a,b,c;
      printf("enter length of sides of triangle  :\n");
      scanf("%d %d %d", &a, &b, &c);
      if(a==b&&a==c)
      {
      	printf("it is a equilateral triangle");
	  }
	  else if((a==b||a==c||b==c)&&(a!=b||a!=c))
	  {
	  	printf("it is a isosceles triangle");
	  }
	  else
	  printf("it is a scalene triangle");
return 0;  
    }

