// Link: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
// Solution:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

   /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
   char ch ;
   char s[90] ;
   char sen[100];
    
   scanf("%c\n",&ch);
   scanf("%s\n",&s);
   scanf("%[^\n]%s", &sen);
   
   printf("%c\n",ch);
   printf("%s\n",s);
   printf("%s",sen);
   
  
    return 0;
}
