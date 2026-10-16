#include <stdio.h>

//TASK1
// int main(){
//    
//     for (int i = 10; i > 0; i--){
//         if (i > 1){
//             printf("%d, ", i);}
//         else {
//             printf("%d", i);}
//         }
//     return 0;
// }
//

// int main(){
//
//     int count = 1;
//     int n = 1000;
//     int tally = 0;
//
//     while (count <= n){
//         tally += count;
//         count ++ ;
//     }
//
//     int resultVerification = n*(n+1)/2;
//     printf("final tally: %d, verified: %d", tally, resultVerification);
//
//
// return 0;
// }
//
//

// int main(){
//   
//     int user_number;
//     int i = 0;
//     int sum = 0; 
//     int average = 0; 
//
//     do {
//         printf("enter integers, 9999 is the stop code");
//         scanf("%d", &user_number);
//         sum += user_number;
//         i++;
//        } while (user_number != 9999); 
//   
//     sum -= 9999;
//     average = sum / (i-1);
//   
//     printf("The sum is %d, and the average is %d", sum, average);
//
// return 0;
// }


// int main(){
//    
//     int base_10_input; 
//     printf("Enter a base 10 number to convert to binary"); 
//     scanf("%d", &base_10_input); 
//     int reverse_arr[100];
//     int i = 0;  
//    
//     while (base_10_input > 0){
//        
//         reverse_arr[i] = base_10_input%2;
//         i++;
//         base_10_input /= 2;
//     } 
//
//     for (int j = i-1; j >= 0; j--){
//         printf("%d", reverse_arr[j]);
//     }

    // base_10_input / 2
    //    
    // printf()
    //
    // /2
    // %
    // Start with 20
    // 1. 20 / 2 = 10 r 0 
    // 2. 10 / 2 = 5 r 0
    // 3. 5 / 2 = 2 r 1
    // 4. 2 / 2 = 1 r 0 
    // 5. 1 / 2 = 0 r 1 
    //
//
// int main(){
//     int number; 
//     printf("Enter your number"); 
//     scanf("%d", &number); 
//
//
//     printf("The reverse of your number is:"); 
//     do {
//         printf("%d", number%10);
//         number /= 10;
//
//        
//     } while ( number != 0);
//
// return 0; 
// }
//
// int main (){
//
//     int userNum;
//     printf("Please enter a number to find the even squares");
//     scanf("%d", &userNum); 
//
//     for(int i = 2; i*i <= userNum; i += 2){
//         printf("%d, "i * i);
//       
//
//     }
//
//    
//     return 0;
// }


int main() {
    
    int account;
    float mortgage_amount; 
    float interest_rate; 
    float mortgage_term; 
    float monthly_payment;
    float total_interest;
    

    while (1){

        
    printf("\nEnter the account number");
    scanf("%d",&account);

    if (account == 0){
    break; 
    }

    printf("Enter the mortgage amount:"); 
    scanf("%f", &mortgage_amount); 
    printf("Enter the mortgage term:"); 
    scanf("%f", &mortgage_term); 
    printf("Enter the mortgage interest rate:"); 
    scanf("%f", &interest_rate); 

    total_interest = (mortgage_amount * interest_rate) * mortgage_term;
    
    monthly_payment = (mortgage_amount + total_interest) / mortgage_term;
    
    if (monthly_payment < 0){
        printf("Not possible"); 
    }

    else if (monthly_payment < 301){
            printf("Too Low");
        }
    else if (monthly_payment < 1001){
            printf("Medium");
        }
    else {
            printf("Too High!");
        } 
    } 
 
    
    return 0;
}


















