#include <stdio.h>

float celsius_at_depth(int depth){    
return 10 * depth + 20 ;

}
float farenheit_at_depth(float celsius){

return 9.0/5 * celsius + 32;
}

int main(){
int depth = 0;
printf("Enter depth: ");
scanf("%d", &depth);
    printf("The temperature at depth %d is %f degrees celsius\n",depth, celsius_at_depth(depth));
    printf("The temperature at depth %d is %f degrees farenheit \n",depth,farenheit_at_depth(celsius_at_depth(depth)));
return 0;
}
