#include <stdio.h>

int drawTriangle(int maxStep){

    for (int i = 0; i < maxStep; i++){

        if (i == 0){
            for(int s = maxStep; s > i; s--){
                printf(" "); 
            }

            printf("//\\\\\n");
        }

        else if (i == maxStep -1){ 
            printf("  ==");
            for (int s = 1; s < maxStep; s++){
                printf("==");
            }
            printf("\n");
        }

        else{
            for(int s = maxStep; s > i; s--){
                printf(" "); 
            }
            printf("//");
            for (int g = 0; g < (i*2); g++){
                printf(" ");
            }
            printf("\\\\\n");
        }

    } 
    //
    //                      |---^
    // i=0                  |--/1\
    // i=1                  |-/ 3 \
    // i=2                  |/  5  \
    // i=3                 |/   7   \
    //
    //
    // i correlates to the position of the correct number of spaces in an odd number array
    // i*2+1 

    return 0;
}

int drawSquare(int maxStep){

    for (int i = 0; i < maxStep; i++){
        if (i == 0 || i == maxStep-1){
            printf(" ===");
            for (int i = 0; i < maxStep; i++){
                printf("=");
            }
            printf("\n");
        }
        else {
            printf(" ||"); 
            for (int i = 0; i < maxStep -1; i++){
                 printf(" ");
            }
            printf("||\n");
            }
        }

    return 0;
}

int drawLine(){
    printf("\n");
    printf("\n");

    return 0;
}

int main(){
    drawTriangle(10);
    drawSquare(10);
    drawLine();
    drawTriangle(5); 
    drawSquare(7);
    return 0; 
}
