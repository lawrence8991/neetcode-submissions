#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double entropy_calculator(bucket[N]){
    
    colour_count[6] = {0, 0, 0, 0, 0, 0}

    for (int i = 0; i < sizeof(bucket) / 4; i++) {
        for (int j = 0; j < 6; j++){
            if (bucket[i] == j){
                colour_count[j] ++ 
            }
        }
    }
    
    int entropy = 0; 

    for (int i = 0; i < 6; i++){
        
    }


}

int main(){
    srand(time(NULL));
    
    int bucket[6];
   
    for (int i = 0; i < 6; i++){
        bucket[i] = rand() % 6 + 1;
        printf(" %d", bucket[i]);
    }
    

    
return 0;
}

