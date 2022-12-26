/* Write C programs to calculate the sum of the following series:-
    (iv) S=1 + x/1! +  x^2/2! + x^3/3! + ………upto n terms or upto specified accuracy of the term value(say <.00001).
*/

#include <stdio.h>
#include <math.h>

void main() 
{
 long int x,i,j,k,n,sq,cnt;
 double fact,sum=0;
 printf("\n ENTER THE VALUE OF N: ");
 scanf("%ld",&n);
 printf("\n ENTER THE VALUE OF X: ");
 scanf("%ld",&x);
 for(i=1,cnt=1;i<=n;i=i+2,cnt++) {
   for(j=1,sq=1;j<=i;j++) { 
        sq=sq*x;
   }
 for(k=1,fact=1;k<=i;k++) {
       fact=fact*k;
 }
  if(cnt%2==1)
   sum=sum+(sq/fact);
  else
   sum=sum-(sq/fact);
  printf("\n THE SUM OF THIS SERIES IS %7.2lf\n",sum);
 }
 
}