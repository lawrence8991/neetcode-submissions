#include <stdio.h>



int main(){

float array[8];

for (int i = 0; i < 8; i++){
    printf("Enter the %d number out of 8 in the array\n", i);
    scanf("%f", &array[i]);
}

float tally = 0;
for (int i = 0; i < sizeof(array) / 4; i++){
   tally += array[i];  
}

float average = tally / (sizeof(array) / 4); 

printf("The average number in the array is %f", average);

return 0;
}
