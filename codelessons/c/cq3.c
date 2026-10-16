#include <stdio.h>
#include <math.h> 

int main(){
    int x1;
    int x2;
    int y1;
    int y2;

    printf("enter x1 ");
    scanf("%d", &x1); 
    printf("enter x2 ");
    scanf("%d", &x2); 
    printf("enter y1 ");
    scanf("%d", &y1);
    printf("enter y2 ");
    scanf("%d", &y2); 

    float d = sqrt(pow(x1 - x2,2)+ pow(y1 - y2, 2));
    printf("%f", d); 

    return 0;
}
