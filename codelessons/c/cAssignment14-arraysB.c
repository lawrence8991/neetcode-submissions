#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int arrayToSearch[20];
    int larger =0, lesser =0;
    srand(time(NULL));

    int numberToFind = 0; 

    printf("What number would you like to find? \n");

    scanf("%d", &numberToFind);

    for(int i = 0; i < sizeof(arrayToSearch)/4; i++){
        arrayToSearch[i] = i + 1;
    }

    printf("The array: \n");

    for (int i = 0; i < sizeof(arrayToSearch)/4; i++){
        printf("%d ", arrayToSearch[i]);
    }

    printf("\nSorting array...\n");

    for (int i = 0; i < sizeof(arrayToSearch)/4; i++){
        for (int j = 0; j < sizeof(arrayToSearch)/4; j++){
            if (arrayToSearch[i] < arrayToSearch[j]){
                larger = arrayToSearch[i]; 
                lesser = arrayToSearch[j];
                arrayToSearch[i] = lesser; 
                arrayToSearch[j] = larger; 
            } 
        }
    }

    for (int i = 0; i < sizeof(arrayToSearch)/4; i++){
        printf("%d ", arrayToSearch[i]);
    }

    printf("\n");

    int midpoint = 0;
    int startpoint = 0; 
    int endpoint = sizeof(arrayToSearch)/4;
    printf("endpoint is: %d \n", endpoint); 
    int found = 0; 

    for (int i = 0; i < sizeof(arrayToSearch)/4; i++){

        printf("startpoint: %d \n", startpoint);
        printf("midpoint: %d \n", midpoint);
        printf("endpoint: %d \n\n", endpoint);

        //
        // 1. Find the midpoint of the array arrayToSearch[(sizeof(arrayToSearch)/4)/2]
        if (arrayToSearch[midpoint] == numberToFind){
            printf("Found the number in position %d in the array", midpoint);
            found = 1; 
            break;
        }

        else if (arrayToSearch[midpoint] > numberToFind){
            endpoint = midpoint;
            midpoint = (endpoint - startpoint) / 2;
        }

        else {
            startpoint = midpoint;
            midpoint = (endpoint + startpoint) / 2;
        }
    } 

    if (found != 1){
        printf("Sorry, we couldn't find anything in the array. :("); 
    }


return 0; 
}
