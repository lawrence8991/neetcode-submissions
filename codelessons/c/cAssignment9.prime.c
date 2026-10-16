#include <stdio.h>

int isPrime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return 0; 
        }
    }
    return 1; 
}

int main(){
    int num;
    printf("Enter an integer to check: ");
    scanf("%d", &num);
    printf("Result: %d\n", isPrime(num));
return 0; 
}
