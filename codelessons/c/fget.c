#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a = 0; 
    char buf[1024];

    do {
    printf("Enter a number: \n");

    if (!fgets(buf, 1024, stdin)){ 
        return 1; 
    }
    a = atoi(buf);
    } while (a == 0);
    printf("You entered %d.\n", a);
    return 0;
}
