/* Any year is entered through the keyboard, write a program to determine whether the year is leap or not. 
   Using logical operators && and ||.
*/

#include <stdio.h>

int main() {

      int year;
      printf("Enter the year: ");
      scanf("%d", &year);

      if((year%4==0 || year%400==0) && (year%100!=0)) {
          printf("%d is leap year", year);
      } else {
          printf("%d is not a leap year", year);
      }


     return 0;
}