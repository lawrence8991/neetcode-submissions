#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>

void playUser(void){
    //int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, p1score = 0, p2score = 0;
}

int readInt(const char *prompt, int *out){
    char buf[1024];
    for (;;){
        printf("%s", prompt); 

        if (!fgets(buf, sizeof(buf), stdin)){
            return 0;
        }

        char *endptr; 
        errno = 0; 

        long val = strtol(buf, &endptr, 10);

        if (endptr == buf){
            printf("Please enter a whole number. \n");
            continue;

        }

        if (errno == ERANGE){
            printf("Number out of range. \n");
            continue; 
        }

        while (*endptr == ' ' || *endptr == 't' || *endptr == '\n' || *endptr == '\r'){
            endptr++; 
        }

        if (*endptr != '\0'){
            printf("Please enter only one number.\n");
            continue;
        }

        *out = (int)val;
        return 1;
    }
}

int tally(int score, int *countD1, int *countD2, int *countD3, int *countD4, int *countD5, int *d1, int *d2, int *d3, int *d4, int *d5,int *freezeD1, int *freezeD2, int *freezeD3 , int *freezeD4 , int *freezeD5){

    printf("DEBUG: The score at start of tally is: %d, freezeD1 = %d, countD1 = %d.",score, *freezeD1, *countD1);
    if (*freezeD1 == 1 && *countD1 == 0){
        printf("adding score to d1 as it's frozen but not been counted. \n");
        score += *d1;
        *countD1 += 1;
    }
    if (*freezeD2 == 1 && *countD2 == 0){score += *d2;
        *countD2 += 1;}
    if (*freezeD3 == 1 && *countD3 == 0){score += *d3;
        *countD3 += 1;}
    if (*freezeD4 == 1 && *countD4 == 0){score += *d4;
        *countD4 += 1;}
    if (*freezeD5 == 1 && *countD5 == 0){score += *d5;
        *countD5 += 1;}

    return score; 
}

void rollDice(int *d1, int *d2, int *d3, int *d4, int *d5, int *freezeD1, int *freezeD2, int *freezeD3 , int *freezeD4 , int *freezeD5){

    if (*freezeD1 != 1){
        printf("Rolling D1 as it's not frozen... \n");
        *d1 = rand() % 6 +1;
        printf("\nD1 is: %d", *d1);}
    if (*freezeD2 != 1){*d2 = rand() % 6 +1;
        printf("\nD2 is: %d", *d2);}
    if (*freezeD3 != 1){*d3 = rand() % 6 +1;
        printf("\nD3 is: %d", *d3);}
    if (*freezeD4 != 1){*d4 = rand() % 6 +1;
        printf("\nD4 is: %d", *d4);}
    if (*freezeD5 != 1){*d5 = rand() % 6 +1;
        printf("\nD5 is: %d", *d5);}

}

void freezeDice(int input1, int input2, int input3, int input4, int input5, int *freezeD1, int *freezeD2, int *freezeD3, int *freezeD4, int *freezeD5){


    for (int i = 1; i < 5; i++){

        if (input1 == 1 || input2 == 1 || input3 == 1 || input4 == 1 || input5 == 1){
            *freezeD1 = 1;
        }

        if (input1 == 2 || input2 == 2 || input3 == 2 || input4 == 2 || input5 == 2){
            *freezeD2 = 1;
        }

        if (input1 == 3 || input2 == 3 || input3 == 3 || input4 == 3 || input5 == 3){
            *freezeD3 = 1;
        }

        if (input1 == 4 || input2 == 4 || input3 == 4 || input4 == 4 || input5 == 4){
            *freezeD4 = 1;
        }

        if (input1 == 5 || input2 == 5 || input3 == 5 || input4 == 5 || input5 == 5){
            *freezeD5 = 1;
        }
    }

    printf("====================\n\nThe current freeze dice values:\n Dice 1: %d\n Dice2: %d\n Dice3: %d\n Dice4: %d\n  Dice5: %d\n\n=======================\n", *freezeD1, *freezeD2, *freezeD3, *freezeD4, *freezeD5);
}

void diceSelector(int *keep1, int *keep2, int *keep3, int *keep4, int *keep5){
    char buf[1024];
    int success;
    long values[5];

    do {
        for (int i = 0; i < 5; i++){
            values[i] = 0; // default: nothing chosen for this slot
        }
        printf("Which dice would you like to keep? Enter the dices number if you want to freeze it, separated by spaces, For example '2' to keep D2\n Enter your dice to keep:\n");
        if (!fgets(buf, sizeof(buf), stdin)){
            return;
        }

        char *ptr = buf;
        char *endptr;
        success = 1;

        for (int i = 0; i < 5; i++){
            errno = 0;
            long val = strtol(ptr, &endptr, 10);

            if (endptr == ptr){
                break; // ran out of numbers on the line, stop reading
            }
            if (errno == ERANGE){
                printf("Sorry, one of those numbers is too small or too large. \n");
                success = 0;
                break;
            }

            values[i] = val;
            ptr = endptr;
        }
    } while (!success);

    *keep1 = (int)values[0];
    *keep2 = (int)values[1];
    *keep3 = (int)values[2];
    *keep4 = (int)values[3];
    *keep5 = (int)values[4];

}

int playRounds(int rounds, int playerTurn){ 
    int freezeD1 = 0,freezeD2 = 0,freezeD3 = 0,freezeD4 = 0, freezeD5 = 0;
    int countD1 = 0, countD2 = 0, countD3 = 0, countD4 = 0, countD5 = 0;  
    int keep1 = 0, keep2 = 0, keep3 = 0, keep4 = 0, keep5 = 0;
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, p1score = 0, p2score = 0;
    int computerHasPlayed = 0, userHasPlayed = 0; 

    for (int i = 0; i < rounds; i++){

        int keepRolling;



        if (playerTurn == 1 && userHasPlayed == 0){

            freezeD1 = 0,freezeD2 = 0,freezeD3 = 0,freezeD4 = 0, freezeD5 = 0;
            countD1 = 0, countD2 = 0, countD3 = 0, countD4 = 0, countD5 = 0;  
            keep1 = 0, keep2 = 0, keep3 = 0, keep4 = 0, keep5 = 0;


            keepRolling = 3;
            while (keepRolling > 0) {
                printf("Round %d start!\n ", i);
                printf("Your turn to roll!\n"); 
                sleep(1);
                printf("You shake the dice and throw...\n");
                sleep(1);
                rollDice(&d1, &d2, &d3, &d4, &d5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5);
                sleep(1);
                diceSelector(&keep1, &keep2, &keep3, &keep4, &keep5);
                printf("Score is %d, now freezing dice...\n", p1score);
                freezeDice(keep1, keep2, keep3, keep4, keep5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5); 
                p1score = tally(p1score, &countD1, &countD2, &countD3, &countD4, &countD5, &d1, &d2, &d3, &d4 ,&d5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5);    
                printf("DEBUG: Dice selected... updating score...\n");
                printf("Player 1's score is %d\n", p1score);
                keepRolling -= 1; 
                if (freezeD1 == 1 && freezeD2 == 1 && freezeD3 == 1 && freezeD4 == 1 && freezeD5 == 1){
                    keepRolling = 0; 
                }
            }
            userHasPlayed = 1; 
            printf("You have selected all your dice, and your final score is: %d, while your opponents score is %d.\n\n==================\n\n", p1score, p2score);
            sleep(2);
            playerTurn = 0;
        }


        if (playerTurn == 0 && computerHasPlayed == 0) {      

            freezeD1 = 0,freezeD2 = 0,freezeD3 = 0,freezeD4 = 0, freezeD5 = 0;
            countD1 = 0, countD2 = 0, countD3 = 0, countD4 = 0, countD5 = 0;  
            keep1 = 0, keep2 = 0, keep3 = 0, keep4 = 0, keep5 = 0;

            keepRolling = 3; 
            while (keepRolling > 0) {
                printf("Round %d\n ", i);
                printf("The computer is playing their turn...!\n"); 
                sleep(1);
                printf("They shake the dice and throw...\n");
                sleep(1);
                rollDice(&d1, &d2, &d3, &d4, &d5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5);
                diceSelector(&keep1, &keep2, &keep3, &keep4, &keep5);
                printf("Score is %d, now freezing dice...\n", p2score);
                freezeDice(keep1, keep2, keep3, keep4, keep5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5); 
                p2score = tally(p2score, &countD1, &countD2, &countD3, &countD4, &countD5, &d1, &d2, &d3, &d4 ,&d5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5);    
                printf("DEBUG: Dice selected... updating score...\n");
                printf("Player 1's score is %d\n", p2score);
                keepRolling -= 1; 
                if (freezeD1 == 1 && freezeD2 == 1 && freezeD3 == 1 && freezeD4 == 1 && freezeD5 == 1){
                    keepRolling = 0; 
                }
            }
            computerHasPlayed = 1; 
            printf("The computer has finished their turn, and their final score is: %d, while your score is: %d\n\n==================\n\n", p2score, p1score);
            sleep(2);
            playerTurn = 1;
        }

        if (playerTurn == 1 && userHasPlayed == 0){

            freezeD1 = 0,freezeD2 = 0,freezeD3 = 0,freezeD4 = 0, freezeD5 = 0;
            countD1 = 0, countD2 = 0, countD3 = 0, countD4 = 0, countD5 = 0;  
            keep1 = 0, keep2 = 0, keep3 = 0, keep4 = 0, keep5 = 0;


            keepRolling = 3;
            while (keepRolling > 0) {
                printf("Round %d start!\n ", i);
                printf("Your turn to roll!\n"); 
                sleep(1);
                printf("You shake the dice and throw...\n");
                sleep(1);
                rollDice(&d1, &d2, &d3, &d4, &d5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5);
                sleep(1);
                diceSelector(&keep1, &keep2, &keep3, &keep4, &keep5);
                printf("Score is %d, now freezing dice...\n", p1score);
                freezeDice(keep1, keep2, keep3, keep4, keep5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5); 
                p1score = tally(p1score, &countD1, &countD2, &countD3, &countD4, &countD5, &d1, &d2, &d3, &d4 ,&d5, &freezeD1, &freezeD2, &freezeD3, &freezeD4, &freezeD5);    
                printf("DEBUG: Dice selected... updating score...\n");
                printf("Player 1's score is %d\n", p1score);
                keepRolling -= 1; 
                if (freezeD1 == 1 && freezeD2 == 1 && freezeD3 == 1 && freezeD4 == 1 && freezeD5 == 1){
                    keepRolling = 0; 
                }
            }
            userHasPlayed = 1; 
            printf("You have selected all your dice, and your final score is: %d\n\n==================\n\n", p1score);
            sleep(2);
            playerTurn = 0;
        }


    }
        if (p1score > p2score){
            printf("You have won, with a score of %d. The computer scored: %d", p1score, p2score); 
        }
        else{
            printf("You have lost :(. You scored %d, while your opponent scored %d", p1score, p2score);
        }
    return 0;
}

int playComputer(int rounds){
    int firstTurn = 1, p1score = 0, p2score = 0;
    printf("Let's roll to see who goes first, highest wins... \n");
    firstTurn = rand() % 2 + 1; 

    if (firstTurn == 1){
        printf("You scored highest, you can go first as player 1...\n");
        sleep(2);
        playRounds(rounds, 1); 
    }
    else {
        printf("I scored the highest, i'll go first...\n");
        sleep(2);
        playRounds(rounds, 0); 
    }
    return 0;
}


int main(){
    char buf[1024];
    int mode = 0;
    int rounds = 0;
    srand(time(NULL));

    if (!readInt("Enter 1 to play the computer 2 to play a friend: ", &mode)){
        return 1;
    }

    if (mode != 1 && mode != 2){
        printf("Invalid choice.\n");
        return 1;
    }

    if (mode == 1){
        if (!readInt("Welcome to the Balut game.\nLet's get started!\n\nHow many rounds would you like to play? ", &rounds)){
            return 1; 
        }
        playComputer(rounds);
    } 
    else {
        printf("Welcome to the Balut game.\nLet's get started!\n\nHow many rounds would you like to play? ");
        playUser();
    } 

    return 0;
}

