// Calculate distance S using S=ut+(1/2)ft^2, u,f,& t accept from keyboard.

#include <stdio.h>

int main() {
     
      float u,t,f,s;
      printf("Enter the input of U,T,F -\n");
      printf("Enter the 'U' : ");
      scanf("%f",&u);
      printf("Enter the 'T' : ");
      scanf("%f",&t);
      printf("Enter the 'F' : ");
      scanf("%f",&f);

      s=u*t+(1/2)*f*t*t;

      printf("The distance S using S=ut+(1/2)ft^2= %.2f",s);


     return 0;
}