#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("The sum of %d and %d is %d.", num1, num2, sum);
    Try
    ' Code that might cause DivideByZero exception
    Dim result As Integer = 10 / 0 ' This will cause a DivideByZero exception
Catch ex As DivideByZeroException
    ' Handle the exception gracefully
    MessageBox.Show("Division by zero is not allowed.")
Catch ex As Exception
    ' Handle other types of exceptions
    MessageBox.Show("An error occurred: " & ex.Message)
End Try


    
    return 0;
}
