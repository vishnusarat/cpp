#include <stdio.h>
int main()
{
   int n, t, sum = 0, remainder,i=0;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder=t % 10;
      sum=sum + remainder;
      t=t / 10;
      i++;
   }

   printf("Sum of digits of %d = %d\n", n, sum);
   printf("number of digits : %d",i);

   return 0;
}
