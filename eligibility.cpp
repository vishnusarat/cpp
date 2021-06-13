#include<stdio.h>   
int main()  
     {  
      int markm,markp,markc,markt;
      printf("enter mark of maths , physics , chemistry    :\n");
      scanf("%d %d %d", &markm, &markp, &markc);
      markt=markm+markp+markc;
      if(markm>=65&&markp>=55&&markc>=50&&markt>=190||(markm+markp)>=140)
      {
      	printf("eligible for admission");
	  }
	  else
	  printf("not eligible");
return 0;  
    }

