#include <stdio.h>

#define LINEMAX 256

int main() {
    float A, B;
    printf("실수1: ");
    scanf("%f", &A);
    
    printf("실수2: ");
    scanf("%f", &B);
    
    float *ptrA = &A;
    float *ptrB = &B;
    
    float *temp = ptrA;
    ptrA = ptrB;
    ptrB = temp;
    
    printf("교환 후\n");
    printf("실수1: %f\n", *ptrA);
    printf("실수2: %f", *ptrB);
    
    
    return 0;
}
