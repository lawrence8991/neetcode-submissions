#include <stdio.h>

int main(){
    int peak = 5; 
    for (int i = 0; i < (peak*2); i++){
        if (i <= peak){
            for (int j = 0; j < i; j++){
                printf("%d ", j+1); 
            }}
        else{
            for (int n = 0; n < (peak - i % peak); n++){
                printf("%d ", n+1);
            }
        }
        printf("\n");
    }
    return 0; 
}

#include <stdio.h>

int main(){
    int n = 5;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            // i = 2 | j = 0, 1, 2
            printf("%d ", j);
        }
        printf("\n");
    }
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}
