// Question Link :- https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true

//Solution :    

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four (int a , int b , int c, int d)
{
    if (d>c&&d>b&&d>a) {
    return (d);
    }
    else if (c>d&&c>b&&c>a) {
    return (c);
    }
    else if (b>c&&b>d&&b>a) {
    return (b);
    }
    else if (a>c&&a>b&&a>d) {
    return (a);
    }
   return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
