#include <stdio.h>

int main() {
    int num1, num2, num5, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

     printf("Enter the fifth number: ");
    scanf("%d", &num5);
    
     sum = num1 + num2 + num5;
    
    printf("The sum of %d and %d is %d.", num1, num2, num5, sum);
    printf("Answer has be Displayed")
    
    return 0;
}
