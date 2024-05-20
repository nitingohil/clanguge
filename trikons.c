#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==1||  j==1||   i==5||  j==5|| i==j ||(i+j)%2==0)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
           
        }    printf("\n"); 
    }
    return 0;
}