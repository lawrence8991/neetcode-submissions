//1. Will the following program work? - Answer - Yes. Includes the standard input output header file, initiates the main function loop, prints a formatted string and returns. 

//2, determine the value of the following integer expressions: 
//i: 42
//ii:1
//iii:1
//iv: 10
//v: 1

//3 Determine the value of the following floating-point expressions: 
//i.42.0
//ii.2.0 
//iii.2.0 

//Determine the errors in each of the following: 
//1. , should be outside the "", and no closing ;
//2. No error. 
//3. Missing , between "%f, %d"

#include <stdio.h>

int main ()
    {
    int speed = 0;
    
    printf("Enter your speed"); 
    scanf("%d", &speed); 

    if (speed < 31){ 
        printf("you're going very slow"); 
    }
    else if (speed < 51){
        printf("You are going slow"); 
    }
    else if (speed < 71){
        printf("Your speed is med");
    }
    else if (speed < 91){
        printf("Fast!");
    }
else {
        printf("very fast!");
      } 

    return 0;
    }
