#include <stdio.h>
#include <math.h>

int geometric(int a,int r,int n){
    
    if (n == 1){
        return a; 
    }

    return r * geometric(a, r, n-1);
}


int main(){
 printf("%d", geometric(4, 3, 3)); 

return 0;
}
