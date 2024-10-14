#include <stdio.h>

int main() 
{
    int a = 5;
    float b = 4.5;
    
    printf("The value of a is: %d", a);    // Error 1: Missing semicolon
    printf("The value of b is: %.2f" b);   // Error 2: Missing comma
    printf("Hello World!")                 // Error 3: Missing semicolon
    
    int sum = a + b;                       // Error 4: Type mismatch (int + float)

    if (sum = 10)                           // Error 5: Assignment instead of comparison
        printf("Sum is 10");
    
    for (int i = 0; i < 10; i++)            // Error 6: Missing closing parenthesis
        printf("i is %d", i;
    
    char name[10] = "John";                 // Error 7: Array size mismatch with string
    printf("Name is %s", name);
    
    int x = 5/0;                            // Error 8: Division by zero
    printf("Division Result: %d", x);
    
    float y = 3.6 * 2;                      // Error 9: Implicit cast from float to int
    printf("Value of y: %d", y);
    
    double z = 4.2.3;                       // Error 10: Incorrect floating point format
    printf("Value of z is: %lf", z);
    
    return 0;
}







