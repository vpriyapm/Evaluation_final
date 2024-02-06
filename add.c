#include <stdio.h>

int main() {
    int num1, num2, sum, diff;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    diff = num1 - num2;
    sum = num1 + num2;
    
    printf("The sum of %d and %d is %d.", num1, num2, sum);
    printf("The sum of %d and %d is %d.", num1, num2, diff);
    return 0;
}
