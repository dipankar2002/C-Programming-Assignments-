// Input 2 non-negative numbers through the key board & find the GCD & LCM.

#include <stdio.h>

int main() {

      int a,b,i,small,gcd,lcm;
      printf("Enter first number: ");
      scanf("%d",&a);
      printf("Enter the second number: ");
      scanf("%d",&b);

      small=( a < b ) ? a : b ;
      for(i=1;i<=small;i++) {
          if((a%i==0) && (b%i==0)) {
               gcd=i;
          }
      }

      lcm=(a*b)/gcd;

      printf("The GCD is: %d",gcd);
      printf("\nThe LCM is: %d",lcm);


     return 0;
}