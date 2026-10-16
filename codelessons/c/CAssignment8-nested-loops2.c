#include <stdio.h>

int main()

{

int tail = 0;
int body = 1;
int head; 
int userInput = 7;

for (int i = 1; i < userInput; i++) {
    head = tail + body; 
    tail = body; 
    body = head;
}

printf("result: %d", head); 

return 0;
}

