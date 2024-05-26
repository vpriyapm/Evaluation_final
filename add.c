#include <stdio.h>

int main() {
    int num1, num2, num3,num4  sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    rintf("Enter the third number: ");
    scanf("%d", &num3);
    sum = num1 + num2 - num3;
    
    printf("The sum of %d and %d is %d.", num1, num2,num3, sum);
    
    return 0;
}
