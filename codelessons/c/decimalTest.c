
#include<stdio.h>

int main(){
    char character = '9'; 
    int decimal;
    int b3=0, b2=0, b1=0, b=0;

    if (character >= 'A'){
        decimal = character - '0' - 7;
    }
    else {
        decimal = character - '0';
    }
    printf("%d", decimal);
}
