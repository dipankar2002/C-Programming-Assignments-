// Write a program to print  n  Fibonacci numbers.(0,1,1,2,3,5,8,13,………..,n).

#include <stdio.h>

void main() {
    int n,i,a=0,b=1,c,s=0;

    printf("Enter the number= ");
    scanf("%d",&n);
    printf("Fibonacci sereies:\n");
    i=3;  

    do { 
          c=a+b;
          printf(" %d ",c);
          a=b;
          b=c;
          s=s+c;
          i++;
    } while(i<=n);

    printf("\nThe sum= %d",s);

}