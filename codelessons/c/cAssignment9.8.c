#include <stdio.h>

int compute_factorial(int n){
    
    int f = 0;
    for (int i = 1; i < n; i++){
            f += n * (n-i);
    }
    return f;
}

int compute_c(int n, int r){
    return compute_factorial(n)/compute_factorial(r)*compute_factorial((n-r));
}

int main(){
    int n, r; 
    printf("Input n and r values: "); 
    scanf("%d %d", &n, &r); 
    printf("Combination of %d objects taken at a time %d is %d\n", n, r, compute_c(n, r));
return 0; 
}
