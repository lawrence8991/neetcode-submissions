#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void){

    long a;
    char buf[1024];
    int success; 

    do {
        printf("Enter a number: \n");
        if (!fgets(buf, 1024, stdin)){

            return 1; 
        }
        char *endptr;
        
        errno = 0; // reset error number? 
        a = strtol(buf, &endptr, 10);
        if (errno == ERANGE){
            printf("Sorry , this number is too small or too large. \n");
            success = 0;
        }

        else if (endptr == buf){
            success = 0; 
        }
        else if (*endptr && *endptr != '\n'){
            success = 0; 
        }
        else {
            success = 1;
        }
    } while (!success);

    printf("You entered: %ld.\n", a);
}
