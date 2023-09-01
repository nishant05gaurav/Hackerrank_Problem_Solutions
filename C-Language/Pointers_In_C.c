// Question Link: https://www.hackerrank.com/domains/c?filters%5Bstatus%5D%5B%5D=solved

//Solution :

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int c , d ;
    
    c = *a+*b;
    d = abs(*a-*b);
    
    *a=c;
    *b=d;
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
