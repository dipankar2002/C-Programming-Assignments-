/* Write C programs to calculate the sum of the following series:-
    (i)  S=1+3+5+7+…………….upto n terms where n is odd integer.
*/

#include <stdio.h>

int main() {

      int n,i,s=0;
      printf("Enter the last odd number: ");
      scanf("%d",&n);

      for(i=1;i<=n;i+=2) {
          s=s+i;
      }
      printf("S=%d",s);


     return 0;
}