// Write a program that accepts the coefficients a, b, and c of a second degree polynomial
// and the value of the variable x, then it calls a function that computes and returns the value
// y.
// y=ax2+bx+c
// Sample Run:
// Enter x: 4
// Enter a, b, c: 1 2 3
// y is 27.00


#include <stdio.h>
#include <math.h>



float carv(int x, int a, int b, int c){
    printf("\npower is: %f", pow((a * b), 2));
    return (a*pow(x,2)) + (b * x) + c; 
}

int main(){

    int a, b, c, x;

    printf("Enter the variable \n");
    scanf("%d", &x); 
    printf("Enter coefficients a, b and c \n"); 
    scanf("%d %d %d", &a, &b, &c); 
    printf("x: %d, a: %d, b: %d, c: %d, Result Y is: %f", x, a, b, c, carv(x, a, b, c));

return 0;
}
