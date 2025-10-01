// 피보나치 수열
#include <stdio.h>

int fibo(int n) {
    if (n <= 2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main() {
    int N;
    printf("입력값: ");
    scanf("%d", &N);
    
    printf("완성된 피보나치 수열");
    for (int i=1; i<=N; i++)
        printf("%d ", fibo(i));
    printf("\n");
    
    return 0;
}
