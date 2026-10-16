#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main(){
    srand(time(NULL));
    
    int cashier = 0; 
    int week = 0;

    while (cashier < 1){
        printf("\nHow many cashiers do you have working at your store?");
        scanf("%d", &cashier); 
        if (cashier < 1){
            printf("You must enter a number greater than 0!");
        }
    }
    

    while (week < 4 || week > 6){
        printf("\nHow many weeks in the simulation month?");
        scanf("%d", &week); 
        if (week < 1){
            printf("You must enter more than 3 weeks!");
        }
    }
    
    int total_salary = 0; 

    for (int i = 0; i < cashier; i++){

        for (int j = 0; j < week; j++){
            int sales = (rand() % 6001) + 1000;
            int salary = 2000 + (sales * 0.01); 
            total_salary += salary;
            printf("Cashier %d sales in week %d: %d\n", i+1, j+1, sales);
            printf("Week %d salary: %d\n",j+1,salary);
        }
    }

    printf("Total salary of all cashiers: %d", total_salary);

     
//Get number of cashiers. 
//Get number of weeks. 
//for each cashier, generate and print sales and salary for each week. 
//Provide a total 




return 0; 
}
