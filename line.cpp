#include<stdio.h>  
#include<math.h>  
int main()  
{  
    int x1, y1, x2,y2,x3,y3,slope1,slope2;  
    printf("\n Enter the first point (x,y) : ");  
    scanf("%d %d", &x1, &y1);  
    printf("\n Enter the second point (x,y) : "); 
    scanf("%d %d", &x2, &y2);
	printf("\n Enter the third point (x,y) : ");  
	scanf("%d %d", &x3, &y3);
	slope1=((y2-y1)/(x2-x1));
	slope2=((y3-y2)/(x3-x2));  
    if (slope1==slope2)  
    {    
    printf("\n they falls on a straight line");  
    }  
    else
	 {    
	printf("\n they donot fall on same line"); 
     }  
return 0;  
    }  


