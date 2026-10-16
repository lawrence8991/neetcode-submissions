#include <stdio.h>

int main(){
    
    int birth_day; 
    int birth_month;
    int birth_year;

    int current_year;
    int current_month;
    int current_day; 
    
    int age_days; 
    int age_months;
    int age_years;

    int target_hr; 
    int patient_age; 
    int max_hr; 
    
    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("enter the curraent date ");
    scanf("%d/%d/%d", &current_day, &current_month, &current_year); 

    printf("enter a birth date in dd/mm/yy format "); 
    scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year); 
    
    if (current_day >= birth_day){
         age_days = current_day - birth_day;
    }
    else {
        age_days = (current_day + month_days[(current_month-1)]) - birth_day;
        age_months = age_months - 1;
    }
    
    if (current_month >= birth_month){
       age_months =+ current_month - birth_month;
       age_years = current_year - birth_year; 
    }
    else {
        age_months =+ (current_month + 12) - birth_month; 
        age_years = (current_year -1) - birth_year; 
    }


    max_hr = 220 - age_years; 
    target_hr = max_hr * 65 / 100; 

    printf(" your time alive: %d Days, %d Months, %d Years. Your max heart rate is %d, and your target heart rate is %d ",age_days, age_months, age_years, max_hr, target_hr);
    
   


    return 0;

}

//1. SUBTRACT CURRENT YEAR FROM BIRTH YEAR
//years = 2026 - 1998 = 28 
//2. Current month = Jul, Birth Month = November. The gap is +4 Months
//3. If there's a + gap, they are part way through the year. So we need to do years - 1, so 28 - 1 = 27 years
//Now we know 27 years and 7 months (july is 07 - just the user input)
//But wait, it might not be 7 months...
//The current day in the month is 26th.
//That would make it 27 years, 7 months, 26 days. 
//But the user was born on the 6th of their month, they have been alive for 27 years, 7 months, 20 days? 
//What if the current day of the month was the 1st? 
//Then they would have been alive for 27 years, 6 months, and the prior months number of days - 6
//What if they were born on the 1st of their month? 
//Then yes, they would have been alive for 27 years, 7 months, 26 days. 
//So the logic is: if birth_day > current_day: 
//months_alive = current_month - 1
//if months_alive = 0, months_alive = 12
//Do we reduce the year again? Or would this have already been accounted for? 
//days alive = month_days[months_alive] - birth_day
//Ohhhh its column subtraction. 
//So days, months, years. Days first. 
//


