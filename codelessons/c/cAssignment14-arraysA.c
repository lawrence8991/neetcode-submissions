#include <stdio.h>

int main(){


    int arrayToSort[5] = {5, 1, 4, 2, 8};
    int swapped = 0; 
    int greaterNumber = 0;
    int lesserNumber = 0; 

    for (int i = 0; i < sizeof(arrayToSort)/4; i++){
        
        for (int j = 0; j < sizeof(arrayToSort)/4; j++){
            if (arrayToSort[i] < arrayToSort[j]){
                greaterNumber = arrayToSort[i];
                lesserNumber = arrayToSort[j]; 
                arrayToSort[i] = lesserNumber; 
                arrayToSort[j] = greaterNumber; 
            }

        }
        
    }  

    for (int i = 0; i < sizeof(arrayToSort) /4; i++){
        printf("%d ", arrayToSort[i]);
    }

return 0;
}
