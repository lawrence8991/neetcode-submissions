#include <stdio.h>
#include <math.h>


float calcMean(float * array, int arraySize){
    float mean = 0; 
    for (int i = 0; i < arraySize; i++){
        mean += *(array + i); 
    }
    mean /= arraySize; 
    printf("mean: %f \n", mean);
    return mean; 
}

float calcDeviation(float * array, int arraySize, float *dArray, float mean){
    for (int i = 0; i < arraySize; i++){
        *(dArray + i) = *(array + i) - mean;
    }
    return 1; 
}

float standardDeviation(float *dArray, int arraySize, float mean){

    float deviation = 0; 

    for (int i = 0; i < arraySize; i++){
        deviation += pow(*(dArray + i), 2); 
    }
    deviation /= arraySize; 
    return sqrt(deviation);

}

int main(){

    int sizeOfStats = 0;

    printf("How many numbers do you want to use in your stats?\n");
    scanf("%d", &sizeOfStats);
    float sum = 0;
    float array[sizeOfStats]; 
    float dArray[sizeOfStats]; 
    float mean = 0; 

    printf("Enter %d numbers that will populate your array \n", sizeOfStats); 

    for (int i = 0; i < sizeOfStats; i++){
        scanf("%f", &array[i]); 
        sum += array[i]; 
    }
    for (int j = 0; j < sizeof(array) / 4; j++){
        printf("%f ", array[j]);
    }

    printf("\n");

    printf("sum: %f\n", sum); 

    mean = calcMean(array, sizeOfStats);
    calcDeviation(array, sizeOfStats, dArray, mean);

    printf("standard deviation: %f\n", standardDeviation(dArray, sizeOfStats, mean));

    return 0;
}
