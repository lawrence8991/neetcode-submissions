#include <stdio.h>

int main()

{

float pi = 4;
long int steps = 100000000000;
int positive_or_negative = 0; 
float denominator = 3;

for (int i = 0; i < steps; i++){
    if (positive_or_negative == 0){
        pi -= (4 / denominator);
        positive_or_negative = 1; 
    }
    else {
        pi += (4 / denominator);
        positive_or_negative = 0;
    } 
    denominator += 2; 
}

    printf("\nPi %f", pi); 
return 0;
}
