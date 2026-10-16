#include <stdio.h>

int digit(int n, int k){
    
    int digit = 0;  

    //n 
    //arrive at 1st ,2nd, 3rd digit in the number 
    //To find the last digit, we can take the whole number and % 10 = 8 
    //To find the second to last digit, we divide the new number by 10, and % 10. 
    //To find the first digit, we divide the new number by 10, and take % 10 again.
    //
    // each cycle, divide by 10, modularo 10, = digit 
    

    for (int i = 0; i < k; i++){
        digit = n % 10;
        
        if (n == 0){
            return -1
        }
        n = n / 10;
    }
    return digit; 

}

int main(){
    int numberToCheck, digitPos;
    printf("enter a number and a position of a digit: \n");
    scanf("%d %d", &numberToCheck, &digitPos);
    printf("The digit is: %d", digit(numberToCheck, digitPos));
return 0;
}
