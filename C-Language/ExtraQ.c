// Question:-  Find Sum, Difference, Multiplication, Division of two numbers

// Solution:-  

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);

    printf("Sum of two numbers is %d\n", (a + b));
    printf("Difference of two numbers is %d\n", (a - b));
    printf("Multiplicaton of two numbers is %d\n", (a * b));
    printf("Division of two numbers is %d\n", (a / b));

    return 0;
}
