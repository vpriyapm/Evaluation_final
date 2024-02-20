#include <stdio.h>

int main()
{
    int n1, n2, ans;
    
    printf("Enter the first number: ");
    scanf("%d", &n1);
    
    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    ans = n1 + n2;
    
    printf("The sum of %d and %d is %d.", n1, n2, ans);
    
    return 0;
}
