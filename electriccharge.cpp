#include<stdio.h>   
int main()  
     {  
      int unit,cid,charge;
      char name;
      printf("enter the name  : ");
      gets(name);
      printf("\nenter consumer id  : ");
      scanf("%d",cid);
      printf("\nenter unit consumed  : ");
      scanf("%d",unit);
      if(unit<200)
      {
      	charge=unit*1.20;
	  }
	  else if(unit>199&&unit<400)
	  {
	  	charge=unit*1.50;
	  }
	  else if(unit>399&&unit<600)
	  {
	  	charge=unit*1.80;
	  }
	  else if(unit>599)
	  {
	  	charge=unit*2;
	  }
	  if(charge>400)
	  {
	  	charge=charge+(charge*.15);
	  	printf("The total charge is  :%d",charge);
	  }
	  else
	  printf("The total charge is  :%d",charge);
return 0;  
    }

