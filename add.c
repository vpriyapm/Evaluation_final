#include <stdio.h>

int main() {
    int num2, num3, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num2);
    
    printf("Enter the second number: ");
    scanf("%d", &num3);
    
    sum = num2 + num3;
    
    printf("The sum of %d and %d is %d.", num2, num3, sum);
    
    return 0;
}
