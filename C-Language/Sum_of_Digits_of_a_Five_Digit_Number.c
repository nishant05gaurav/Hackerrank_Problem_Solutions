// Question :- https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true

// Solution :-


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    
    
    while (n!=0) 
    {
    int c;
    c=n%10;
    sum = sum + c;
    n=n/10;
    }

    printf("%d",sum);
    return 0;
}
