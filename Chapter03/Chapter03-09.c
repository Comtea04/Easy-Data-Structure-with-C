// 1부터 입력값까지 합
#include <stdio.h>

int f(int n) {
    if (n==1) return 1;
    return n+f(n-1);
}

int main() {
    int N;
    printf("입력값: ");
    scanf("%d", &N);
    
    printf("1부터 %d까지 합: %d\n", N, f(N));
    
    return 0;
}
