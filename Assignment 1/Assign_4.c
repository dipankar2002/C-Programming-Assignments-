// Write a program to calculate the simple interest of a given amount.

#include <stdio.h>

int main() {
     
      float p,r,t,si;
      printf("Enter the amount: ");
      scanf("%f",&p);
      printf("Enter the time: ");
      scanf("%f",&t);
      printf("Enter the rate: ");
      scanf("%f",&r);

      si=(p*t*r)/100;

      printf("The simple interest of the amount is: %.2f",si);


     return 0;
}