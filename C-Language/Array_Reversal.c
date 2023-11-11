// Question:-  https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true

// Solution:- 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    int c ;
    
    for (int i = 0; i<n/2; i++)
    {
        c=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=c;
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    return 0;
}
