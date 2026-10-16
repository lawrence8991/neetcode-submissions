#include <stdio.h> 

int main(){
    
    char status;  
    
    printf("Please enter the status of the salesperson (s/j):");
    scanf("%c", &status); 

    switch (status) {
    
        case 's':
        case 'S':
        printf("senior salary: $800");
        break; 
        
        case 'j':
        case 'J':
        printf("Junior salary: $375");
        break; 

        default: 
        printf("Enter the correct status");
    }
    


return 0;
}
