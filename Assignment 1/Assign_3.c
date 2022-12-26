// Write a program to calculate the area & circumference of the circle. The radius of the circle is input through the keyboard.

#include <stdio.h>

int main() {
     
      float r,a,c;
      printf("Enter the radius of the circle: ");
      scanf("%f",&r);

      a=3.14*r*r;
      c=2*3.14*r;

      printf("The area of the circle is: %.2f",a);
      printf("\nThe circumference of the circle is: %.2f",c);


     return 0;
}