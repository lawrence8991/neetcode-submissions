#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void alterArrays(int *array1, int *array2, int *array3, int arraySize){

   for (int i = 0; i < arraySize; i++){
        *(array1 + i) = random() % 100 + 1; 
        *(array2 + i) = random() % 100 + 1;
        *(array3+i) = *(array1 + i) + *(array2 + i);
   }

   for (int i = 0; i < arraySize; i++){

       printf("%d ", *(array1 + i));
       printf("%d ", *(array2 + i));
       printf("%d ", *(array3 + i));
       printf("\n");
   }
   
}

int main(){

    srand(time(NULL));
    int arraySize = 10; 
    int array1[10]; 
    int array2[10];
    int array3[10];

    alterArrays(array1, array2, array3, arraySize);

return 0; 
}
