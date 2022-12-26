// Input a number through the key board & find the number is prime or not.

#include <stdio.h>
#include <conio.h>

void main() {

      int n,i,flag=0;
      clrscr();
      
      printf("Enter the number: ");
      scanf("%d",&n);

      for(i=2;i<=n/2;i++) {
          if(n%i==0) {
               flag=1;
               break;
          }
      }
      if(flag==0) {
          printf("The number is Prime");
      } else {
          printf("The number is not prime");
      }
      
     getch();
}
