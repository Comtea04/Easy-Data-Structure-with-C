#include <stdio.h>

int main() {
    // 지정된 값으로 초기화
    int arr[6] = {19, 2, 25, 92, 36, 45};
    
    // 1.
    printf("배열의 값: ");
    for (int i=0; i<6; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    // 2.
    int min = arr[0], max = arr[0];
    for (int i=0; i<6; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("최소값: %d\n", min);
    printf("최대값: %d\n\n", max);
    
    // 3.
    int sum = 0;
    for (int i=0; i<6; i++) sum += arr[i];
    int avg = sum / 6.0;
    
    printf("평균: %d\n", avg);
    printf("\n");
    
    // 4.
    int exp_squares = 0;        // 제곱의 평균
    for (int i=0; i<6; i++) exp_squares += (arr[i] * arr[i]);
    
    int variance = exp_squares - (avg*avg);      // 분산 = 제곱의 평균 - 평균의 제곱
    
    printf("분산: %d\n", variance);
    printf("\n");

    return 0;
}
