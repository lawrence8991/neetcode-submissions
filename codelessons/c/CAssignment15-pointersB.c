#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findGrades(int students){

    int grades[] = (int *) malloc(sizeof(int) * students);

    for (int i = 0; i < sizeof(grades)/4; i++){
        *(grades + i) = random() % 100 + 1; 
        printf("%d ", *(grades + i)); 
    }
}

int main(){
srand(time(NULL));
int students = 0; 

printf("How many students are there in the class? \n");
scanf("%d", &students);

findGrades(students); 

return 0;
