// Question: https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

// Solution:

#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int n, size;
  scanf("%d", &n);
  size=2*n-1;
  int arr[size][size];

  for(int i=0; i<n;i++)
      for(int row=i; row<size-i; row++)
          for(int col=i; col<size-i; col++)
            arr[row][col] = n-i;

  for(int row=0; row<size; row++) {
    for(int col=0; col<size; col++)
      printf("%d ",arr[row][col]);
    printf("\n");
  }
  return 0;
}
