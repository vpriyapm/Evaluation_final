#include <stdio.h>

int main() {
    int num1, num2, diffe;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    diffe = num1 + num2;
    
    printf("The diff of %d and %d is %d.", num1, num2, diffe);
    
    return 0;
}
