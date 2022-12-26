/* Write C programs to calculate the sum of the following series:-
    (iii) S=2+5+10+17+………….upto n terms.
*/

#include <stdio.h>

int main() {

      int n,i,s=0;
      printf("Enter the last number: ");
      scanf("%d",&n);

      for(i=1;i<=n;i++) {
          s=s+(i*i)+1;
      }
      printf("S=%d",s);


     return 0;
}