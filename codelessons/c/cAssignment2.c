#include <stdio.h> 

int main(){

    int semitone = 0;
    
    

    printf("Enter a semitone");
    scanf("%d", &semitone);
    

    switch (semitone) {
  case 0:
    printf("perfect prime"); 
    break;
  case 1:
  case 2: 
    printf("Second");
    // code block
    break;
  case 3:
  case 4: 
    printf("Third:");
    break;
  case 5:
    printf("Fourth"); 
    break;
  default: 
    printf("Invalid"); 
}
   
    return 0;
}
