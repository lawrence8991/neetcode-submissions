#include <stdio.h> 
#include <math.h>

int main(){
    float x; 
    printf("Enter x ");
    scanf("%f", &x);

    float y = x * 2;
    float f = 2 * cos(pow(y,2) * sqrt(2 * x)) + ((4 * x) + 3) / (3 * pow(x,2) + (2 * y) + 4) + sin(y);
    
    printf("x: %f, y: %f, f: %f", x, y, f);  
    return 0;
}
