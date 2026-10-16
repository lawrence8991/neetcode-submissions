#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define arraySize 10


void ves(int array[]){
    int numberOfNegatives = 0;
    for(int i = 0; i < arraySize; i++){
        if (array[i] < 0){
            printf("position %d holds negative number: %d\n", i, array[i]);
            numberOfNegatives++;
        }
    }
    printf("The total number of negatives in the array is: %d \n", numberOfNegatives);
}

int searchArray(int array[], int numberToFind){

    for(int i = 0; i < arraySize; i++){

        if (numberToFind == array[i]){
            printf("The number was found at position %d of the array\n", i); 
            return 1; 
        }
        printf("No match found at %d, the number was: %d\n", i, array[i]);
    }
    return 0; 
}

int main(){

    int numberToFind = 0; 
    int array[arraySize]; 
    
    for(int i = 0; i < arraySize; i++){
        printf("Enter the number for position %d of the array: \n", i);
        scanf("%d", &array[i]); 
        
    }
   
    printf("Enter a number for us to search in the array: \n");
    scanf("%d", &numberToFind);
    printf("The search result was: %d",searchArray(array, numberToFind));
    findNegatives(array);
    

return 0;
}
