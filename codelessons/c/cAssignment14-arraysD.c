#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));

int array[5][5]; 
int mask[5][5] = {{0,0,0,0,0},{0, 1, 1, 1, 0},{0, 1, 1, 1, 0},{0, 1, 1, 1, 0},{0, 0, 0, 0, 0}};

for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
        array[i][j] = rand() % 255 + 1; 
    }
}

for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
        mask[i][j] = mask[i][j] * array[i][j]; 
    }
}


for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
    printf("%d ", mask[i][j]);  
    }
    printf("\n");
}

return 0;
}
