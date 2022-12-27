// 3.	Write a program to print all Armstrong number between the range 1 to 1000. (Armstrong number Example:: 153=1^3 + 5^3 + 3^3=1+125+27=153)

#include <stdio.h>
#include <math.h>

void main() {
    int i,s,n,count=0;
    
    printf("All Armstrong number between 1 and 1000 are:\n");
  
    for(i=1;i<=1000;i++) {
        n=i;
        while(n!=0) {
            n=n/10;
            count++;
        }
        n=i;
        s=pow( n % 10, count )+pow( (n % 100 - n % 10) / 10, count)+pow((n % 1000 - n % 100) / 100, count);
        if (s == i) {
            printf("%d ",i);
        }
        count = 0;
    }

}