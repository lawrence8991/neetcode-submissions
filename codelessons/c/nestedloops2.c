#include <stdio.h> 

int main(){
  int iterations = 0;
  float constant = 1;
  printf("Please enter the number of iterations"); 
  scanf("%d", &iterations); 
  
  for (int i = 1; i <= iterations; i++){
    float factorial = 1; 

    for (int j = 0; j < i; j++){
      factorial *= i - (1 * j);
      printf("factorial:%f, i: %d, j:%d\n", factorial, i, j); 
      }

    constant += 1 / factorial; 
    printf("%f\n", constant); 
    }

return 0; 
}
