// Question:-  Finding Tables.

// Solution:- 

#include <stdio.h>

int main()
{
    int a;
    int b[10];

    printf("Enter the number ");
    scanf("%d", &a);

    printf("Your Table is:-\n");

    for (int i = 1; i <= 10; i++)
    {

        printf("%d * %d is %d\n", a, i, (a * i));
        b[i] = (a * i);
    }

    return 0;
}
