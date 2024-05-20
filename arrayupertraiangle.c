
#include <stdio.h>

int main()
{
    int a[3][3];
     int sum1, sum2,sum3;
     
    
    
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            printf("enter the value");
            scanf("%d",&a[i][k]);
            
    }    
    printf("\n");
    }
    for (int i=0;i<3;i++){
        for(int k=0;k<3;k++){
        printf("%d",a[i][k]);
        if(i<k){
            sum1+=a[i][k];
            
          }
       
        }
        
            
            
        printf("\n");
        
 
 }
 printf("%d",sum1);
    return 0;
}
