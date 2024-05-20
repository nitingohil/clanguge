
#include <stdio.h>

int main()
{
    int a[3][3];
    for(int i=0;i<5;i++){
        for(int k=0;k<5;k++){
    
    printf("enter the element of %dand%d",i,k);
    scanf("%d",&a[i][k]);
    }    
    printf("\n");
    }
    for (int i=0;i<5;i++){
        for(int k=0;k<5;k++){
        printf("%d",a[i][k]);
        
        }
        printf("\n");
        }

    
    return 0;
}
