#include <stdio.h>



int digitCheck(int n){

    int digitLength = 0;

    //n 
    //arrive at 1st ,2nd, 3rd digit in the number 
    //To find the last digit, we can take the whole number and % 10 = 8 
    //To find the second to last digit, we divide the new number by 10, and % 10. 
    //To find the first digit, we divide the new number by 10, and take % 10 again.
    //
    // each cycle, divide by 10, modularo 10, = digit 

    while (n > 0){
        n /= 10;
        digitLength += 1;
    }

    return digitLength;
}


int digit(int n, int k){
    
    int digit = 0;  

    for (int i = 0; i < k; i++){
        digit = n % 10;
        
        if (n == 0){
            return 0;
        }
        n = n / 10;
    }
    return digit; 

}

// int digit(int n, int k){
//
//     int digit = 0;
//
//     for (int i = 0; i < k; i++){
//         digit = n % 10;
//
//         if (n == 0){
//             return 0;
//         }
//
//         n = n / 10;
//         return digit;
//     } 
//
// }

int main(){

    int numberToCheck, digitPos, flippedNumber, stop = 0;

    printf("enter a number and a position of a digit: \n");
    scanf("%d", &numberToCheck);
    int result = 0;
    int priorNum = 0;
    int digitL = digitCheck(numberToCheck);

    printf("digitL check: %d", digitL);

    for (int i = 1; stop == 0; i++){

        int multiple = 1;

        for (int j = digitL; j > i; j--){
            multiple *= 10;
        }

        printf("multiple is: %d, flipping now: \n ", multiple);

        priorNum = flippedNumber;
        flippedNumber = digit(numberToCheck, i) * multiple;
        result += flippedNumber; 

        printf("prior num in loop: %d \n", priorNum);
        printf("flipped num in loop: %d \n ", flippedNumber);

        if (priorNum == flippedNumber){
            stop = 1;
        }

    }
    printf("result: %d\n", result);

    if (numberToCheck == result){
        printf("It's a palindrome");
    }
    else{
        printf("Not a palindrome!");
    }

    return 0;
}


