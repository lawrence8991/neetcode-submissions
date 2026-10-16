#include <stdio.h>



int returnMin3(int num1, int num2, int num3){

    if (num1 < num2 && num3){
        return num1;
    }
    else if (num2 < num1 && num2 < num3) {
        return num2;
    }
    else {
        return num3;
    }

}

int returnMin(int num1, int num2){

    if (num1 < num2){
        return num1;
    }
    else {
        return num2;
    }

}

int main(){
    int num1, num2;
    printf("enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("The lower of the integers is: %d \n", returnMin(num1, num2));

return 0;
}
