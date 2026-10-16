#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <unistd.h>
int main(){

    srand(time(NULL));
    int array1[10]; 
    int array2[10];
    int noDupes = 0; 

    for (int i =0; i < 10; i++){

        array1[i] = rand() % 10;
        sleep(1);
        array2[i] = rand() % 10; 

    }

    for(int i = 0; i < 10; i++){
        printf("%d", array1[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d", array2[i]);
    }

    printf("\nDuplicate elements are as follows: \n");


    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 10; j++){
            if (array1[i] == array2[j]){
                printf("%d ", array1[i]); 
                noDupes = 1; 
                break;
            }
        }
    }

    if (noDupes == 0){
        printf("No duplicates!");
    }


    return 0; 
}
