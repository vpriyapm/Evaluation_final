#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second : ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("The sum of is %d.", sum);
    
    return 0;
}
