#include<stdio.h>
int main()
{
  
  
  int a[7][7];
  for(int i=0;i<=7;i++){
  for(int h=0;h<=7;h++)
	{

	  printf("enter the number of %d and %d",i,h);
	  scanf ("%d",&a[i][h]);
	  
	}
	printf("\n");
  }
	  for(int i=0;i<=7;i++){
	  for(int h=0;h<=7;h++){
	  printf("%d",a[i][h]);
	      
	  }   
	  printf("\n");
	  }
	return 0;
	}
	    
