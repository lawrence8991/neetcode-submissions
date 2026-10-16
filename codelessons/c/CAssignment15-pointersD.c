#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float computeResults(int *testResults, int *actualResults, int *flags, int sampleSize){
    
    for (int i = 0; i < sampleSize; i++){
       *(testResults + i) = random() % 2;
       *(actualResults + i) = random() % 2; 
    }
    // TN, TP, FP, FN
    //
        for (int j = 0; j < sampleSize; j++){

            if (*(testResults + j) == 0 && *(actualResults + j) == 0){
                (*flags)++;    
            }

            if (*(testResults + j) == 1 && *(actualResults + j) == 1){
                (*(flags+1)) ++;
            }
            
            if (*(testResults + j) == 1 && *(actualResults + j) == 0){
                (*(flags+2)) ++; 
            }

            if (*(testResults + j) == 0 && *(actualResults + j) == 1){
                (*(flags+3)) ++;
            }
        }
        
        printf("TP: %d, TN: %d, FP: %d, FN: %d", *(flags+1), *(flags), *(flags + 2), *(flags + 3));
    
        return (float)(*(flags + 1) + *(flags)) / (float)(*(flags + 1) + *(flags) + *(flags + 2) + *(flags + 3));
}

int main(){
    srand(time(NULL));
    int sampleSize = 0; 
    printf("enter the sample size. \n");
    scanf("%d", &sampleSize); 
    int testResults[sampleSize];
    int actualResults[sampleSize];
    int flags[] = {0, 0, 0, 0};
    float accuracy = computeResults(testResults, actualResults, flags, sampleSize);
    printf("The test accuracy is: %f", accuracy);

return 0; 
}

