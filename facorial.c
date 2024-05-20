
#include <stdio.h>

int n;
  factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
 int main(){

    int num;
    printf("enter the value of : ");
    scanf("%d", &num);

    if (num < 0)
        printf("\n");
        
    else
        printf("Factorial of %d is %d\n", num, factorial(num));

  return 0;
 }    
