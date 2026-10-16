#include <stdio.h>

int isMultiple(int num1, int num2){
    if (num1 % num2 == 0){
        return 1;
    }
    else {
        return -1;
    }
}

int main(){

int num1=0, num2=0; 

printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
printf("The number is: %d", isMultiple(num1, num2));

return 0; 
}
