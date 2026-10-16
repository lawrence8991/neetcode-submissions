#include <stdio.h>

int main(){
    int days;
    int months;
    int years;

    printf("enter a date in dd/mm/yy format"); 
    scanf("%d/%d/%d", &days, &months, &years); 

    printf("days: %d, months: %d, years: %d", days, months, years); 

    
return 0;
}
