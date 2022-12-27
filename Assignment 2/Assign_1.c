// Write a program to find factorial of a given integer n.

#include <stdio.h>

void main() {
    int n,i,f=01;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        f=f*i;
    }

    printf("The Factorial is: %d",f);

}