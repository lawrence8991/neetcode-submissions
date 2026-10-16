#include <stdio.h>
#include <math.h> 

int main(void) {
    int a ;
    printf("enter a");
    scanf("%d", &a);
    int b;
    printf("enter b");
    scanf("%d", &b);
    int c = 4;
    printf("enter c");
    scanf("%d", &c);
    
    float s = (a+b+c)/2.0f;

    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area is %f", area);
    printf("test is it percentage");
    return 0;
}

