/* Write C programs to calculate the sum of the following series:-
    (ii)  S=2+4+6+8+…………….upto n terms where n is even integer.
*/

#include <stdio.h>

int main() {

      int n,i,s=0;
      printf("Enter the last even number: ");
      scanf("%d",&n);

      for(i=2;i<=n;i+=2) {
          s=s+i;
      }
      printf("S=%d",s);


     return 0;
}