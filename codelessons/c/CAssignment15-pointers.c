#include <stdio.h>

int main(){
    
    float array[] = {12.9, 19.6, 11.4, 13.7, 9.5, 15.2, 17.6};

    for (int i = 0; i < sizeof(array)/4; i++){
        printf("%f ", *(array + i));
    }
    


return 0; 
}
