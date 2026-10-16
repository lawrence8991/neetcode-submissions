// Tasks:
// a. Write a function to return the volume of a sphere with the input argument for the radius of
// the sphere. The formula for the volume of the sphere is , where r is the radius of the
// sphere.
// Sample Run:
// Enter radius: 3
// Volume of the sphere is 113.04

#include <stdio.h>
#include <math.h>

float voas(float r){
    return (4.0 / 3.0) * M_PI * pow(r, 3);   
}

int main(){
    float radius = 0.0; 
    printf("Enter the radius of a sphere: "); 
    scanf("%f", &radius);
    printf("the volume of a sphere is: %f", voas(radius)); 

return 0;

