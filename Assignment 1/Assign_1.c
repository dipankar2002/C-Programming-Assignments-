// Write a program to convert the temperature from Fahrenheit to Centigrade.(Temperature in Fahrenheit is input through keyboard)

#include <stdio.h>

int main() {
    float c,f;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&f);
    
    c=(f-32)*5/9;

    printf("The temperature in Celsius is: %.2f",c);

    return 0;
}