// Two numbers (a & b) are input through the key board. Write a program to swap the two numbers (using/without using) 3rd variable.

// Using 3rd variable-

#include <stdio.h>

/*int main() {
    int a,b,c;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);

    c=a;
    a=b;n
    b=c;

    printf("After swap:\n");
    printf("The 1st number: %d",a);
    printf("\nThe 2nd number: %d",b);

    return 0;
}*/

// Without using 3rd variable-

int main() {
    int a,b;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swap:\n");
    printf("The 1st number: %d",a);
    printf("\nThe 2nd number: %d",b);

    return 0;
}