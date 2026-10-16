#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numElements = 0; 
    srand(time(NULL));
    
    printf("Enter the number of elements for the arrays? \n");
    scanf("%d", &numElements);

    int * array1;
    int * array2; 

    int product = 0; 

    array1 = (int *) malloc(sizeof(int)*numElements); 
    array2 = (int *) malloc(sizeof(int)*numElements);
    
    for (int i = 0; i < numElements; i++){

        array1[i] = random() % 5 + 1;
        array2[i] = random() % 5 + 1;
        
        product += array1[i] * array2[i]; 
        
    }

    printf("%d", product);
    
return 0;
}
