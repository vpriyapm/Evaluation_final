#include <stdio.h>

int main()
{
    int n1, n2, product;
    
    printf("Enter the first number: ");
    scanf("%d", &n1);
    
    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    product = n1 + n2;
    
    printf("The sum of %d and %d is %d.", n1, n2, product);
    
    return 0;
}
