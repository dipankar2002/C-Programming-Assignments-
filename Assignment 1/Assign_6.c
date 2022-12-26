/* A 4 digit number is input through the key board. Write a program to reverse the numbers.
   (Ex:- Input->12345    Output->54321).Also calculate the sum of digits.
*/

#include <stdio.h>

int main() {

      long int n,r,s=0,rev=0;
      printf("Enter the number: ");
      scanf("%ld",&n);

      while(n!=0) {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
            s=s+r;
      } 
      printf("%d\n",rev);
      printf("%d",s);


     return 0;
}