#include<stdio.h> 

int main(){
    char character = 0;  
    int address_length = 0; 
    int validated = 0;
    int running = 1;
    int bad_character = 0;
    int cisco_a = 1;
    int cisco_b = 1;
    int google = 1;
    int huawei = 1; 
    int global = 0; 
    int local = 0; 
    int unicast = 0; 
    int multicast = 0;
    int action;

    while(running){

    while(!validated){

    address_length = 0;
    bad_character = 0;
    cisco_a = 1;
    cisco_b = 1;
    character = 0;
    google = 1;
    huawei = 1;
    global = 0;
    local = 0;
    unicast = 0;
    multicast = 0;
    fflush(stdin);

        printf("Please enter a Mac Address\n");

        while (character != '\n'){
            scanf("%c", &character);
            // Buffer is initialized [][][][][][][]
            //Check 1: Is this character hexidecimal 1 - 9 or A to F? 
            if (!((character >= '0' && character <= '9') || (character >= 'A' && character <= 'F'))) {
                if (character == '-' || character == '\n'){
                    continue; 
                }
                bad_character = 1;
                continue;
            }

            //Input is now stored in the buffer 
            //Does the char disqualify the mac address from an organisation? 

            if (address_length == 0) {
                if (character != 'C') { cisco_a = 0; }
                if (character != '0') { cisco_b = 0; }
                if (character != '3') { google  = 0; }
                if (character != '0') { huawei  = 0; }
            }
            if (address_length == 1) {
                if (character != 'C') { cisco_a = 0; }
                if (character != '0') { cisco_b = 0; }
                if (character != 'C') { google  = 0; }
                if (character != '0') { huawei  = 0; }
            }
            if (address_length == 2) {
                if (character != '4') { cisco_a = 0; }
                if (character != '0') { cisco_b = 0; }
                if (character != '5') { google  = 0; }
                if (character != '9') { huawei  = 0; }
            }
            if (address_length == 3) {
                if (character != '6') { cisco_a = 0; }
                if (character != '8') { cisco_b = 0; }
                if (character != 'A') { google  = 0; }
                if (character != 'A') { huawei  = 0; }
            }
            if (address_length == 4) {
                if (character != 'D') { cisco_a = 0; }
                if (character != '2') { cisco_b = 0; }
                if (character != 'B') { google  = 0; }
                if (character != 'C') { huawei  = 0; }
            }
            if (address_length == 5) {
                if (character != '6') { cisco_a = 0; }
                if (character != '0') { cisco_b = 0; }
                if (character != '4') { google  = 0; }
                if (character != 'D') { huawei  = 0; }
            }
            
            //for the second part of the first octet, we need to convert to binary, check if the
            //last bit is 0 or 1. 0 = Unicast, 1 = Multicast
            //And then check if the second bit is 0 or 1
            //0 = global, 1 = local
            //Binary Converter

            if (address_length == 1){
                int decimal;
                    int b3=0, b2=0, b1=0, b=0;

                    if (character >= 'A'){
                        decimal = character - '0' - 7;
                    }
                    else {
                        decimal = character - '0';
                    }

                    if (decimal >= 8){
                        b3 = 1;
                        decimal -= 8;
                    }

                    if (decimal >= 4){
                        b2 = 1;
                        decimal -= 4;
                    }
                    if (decimal >= 2){
                        b1 = 1; 
                        decimal -= 2;
                    }
                    if (decimal >= 1){
                        b = 1; 
                        decimal -= 1; 
                    }

                    if (b == 0){
                        unicast = 1; 
                    }
                    if (b == 1){
                        multicast = 1; 
                    }
                    if (b1 == 0){
                        global = 1; 
                    }
                    if (b1 == 1){
                        local = 1; 
                    }   
            }
            address_length ++;
        }
    

            //Check 2: Is the input 6 Octets, when exclusing hypthen separators'-'?
            if (bad_character || address_length != 12){
                printf("Not A Mac Address\n");
            }
            else {
                validated = 1;
            }
    }

    while (validated == 1){
        printf("Welcome to the action menue \n"); 
        printf("==============================\n");
        printf("Press 1 to check Unicast or Multicast\n");
        printf("Press 2 to check Local or global\n");
        printf("Press 3 to check Manufacturer Information\n");
        printf("Press 4 to enter another MAC address\n");
        printf("Press 5 to exit\n");
        fflush(stdout);

        scanf("%d", &action);

        //throw away the rest of the line so the next %c read is clean
        character = 0;
        while (character != '\n'){
            scanf("%c", &character);
        }

        if (action == 1){
            if (unicast == 1){
                printf("You entered a unicast MAC address\n");
            }
            else{
                printf("You entered a multicast MAC address\n");
            }
        }

        if (action == 2){
            if (global == 1){
                printf("You entered a global MAC address \n"); 
            }
            else{
                printf("You entered a local MAC address \n");
            }
        }

        if (action == 3){
            if (cisco_a == 1 || cisco_b == 1){
                printf("You entered a cisco MAC address \n");
            }
            else if (google == 1) {
                printf("You entered a google MAC address \n");
            }
            else if (huawei == 1){
                printf("You entered a Huawei MAC address \n");
            }
            else {
                printf("Device manufacturer unknown \n");
            }
        }

        if (action == 4){
            validated = 0;        
        }
        if (action == 5){
            printf("Exiting...\n");
            validated = 0;
            running = 0;
        }
    }

    }

    


    return 0;
}
