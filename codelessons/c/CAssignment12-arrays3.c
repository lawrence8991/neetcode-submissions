#include<stdio.h>

int main(){

int array[5] = {4, 2, 9, 3, 1}; 
int x = 5;
int match = 0; 

for (int i = 0; i < sizeof(array) / sizeof(x); i++){

    for (int j = i+1; j < sizeof(array) / sizeof(j); j++){
        if (array[i] + array[j] == x){

            match = 1;
            printf("Match found at position %d value %d, and position %d, value %d", i, array[i], j, array[j]); 
            
        }
    }
    
}

if (match == 0){
    printf("No match was found");
}

return 0; 

}
