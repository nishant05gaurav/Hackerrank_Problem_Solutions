// Question:- Enter the sum of elements of an array.

// Solution:- 

#include <stdio.h>

int main()
{
    int a[5];

    printf("Enter the numbers\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;

    for (int i = 0; i < 5 ; i++)
    {
        sum = sum + a[i];
    
    }

    printf("Sum is %d",sum );
    return 0;
}
