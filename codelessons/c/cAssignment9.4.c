#include <stdio.h>
#include <math.h>

float distanceBetweenTwoPoints(float x, float y, float x2, float y2){
        return sqrt(pow((x2 -x ),2) + pow((y2 - y),2));}

int main(){

    int x, y, x2, y2;

    printf("Enter point 1:"); 
    scanf("%d %d", &x, &y);
    printf("Enter point 2:"); 
    scanf("%d %d", &x2, &y2);

    printf("The distance between the two points is: %f", distanceBetweenTwoPoints(x, y, x2, y2));

return 0; 
}
