#include <stdio.h>
#include <math.h>

void menu (void){

printf("Choose an action: \n"); 
printf("1. Use + to Add\n2. Use - to Subtract\n3. Use * Multiply\n 4. Use ^ to power\n 5. Use q to quit\n");

}

int add (int number, int operand){
    return number + operand;
};

int sub (int number, int operand){
    return number - operand;
};

int power (int number, int operand){
    return pow(number, operand); 
}

int multiply (int number, int operand){
    return number * operand; 
}

int main (){
    int number = 0; 
    char action = 'a';
    int turns = 0;
    int operand = 0;
    // char character = 'a';

    while (turns != -1){
        if (turns == 0){
            menu();}
        
        scanf("%c %d",&action, &operand);
       
        // while (character != '\n'){
        //     scanf("%c", &character);
        // }
        
        if (action == '+'){
           number = add(number, operand);
        }
        else if (action == '-'){
           number = sub(number, operand);  

        }
        else if (action == '*'){
            number = multiply(number, operand);

        }
        else if (action == '^'){
            number = power(number, operand);
        }
        else if (action == 'q'){
            printf("Goodbye");
            turns = -1;
            break;

        }
        else{
            printf("Please choose one of the actions\n");
            menu();
            continue; 
        }
        
        printf("Result so far is: %d\n", number);
        turns ++;
        }
    

return 0;

}



