#include<stdio.h> 
 int main() 
 { 
   int i=1;
   do 
   { 
      if( i % 3 == 0 ) 
      { 
         printf("\n%d ",i); 
      } 
      i++; 
   } while( i < 101 ); 
   return 0; 
 } 
