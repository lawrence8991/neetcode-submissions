#include <stdio.h>

int isSumDigitsEven(int value){
    
    int sum = 0;

    while (value > 0){
        sum += value % 10;
        value /= 10;
    }
    
    if (sum % 2 == 0){
        return 1;
    }
    else {
        return 0;
    } 

}

int main(){
    int value =0;

    printf("Enter a value: ");
    scanf("%d", &value);

    if (isSumDigitsEven(value) == 1){
        printf("The value is even.");
    }
    else {
        printf("The value is odd.");
    }

return 0; 
}
