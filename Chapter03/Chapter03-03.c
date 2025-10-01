#include <stdio.h>

#define LINEMAX 256

int main() {
    char words[5][LINEMAX];
    
    printf("문자열 5개를 enter단위로 입력하시오:\n");
    for (int i=0; i<5; i++) {
        scanf("%s", words[i]);
    }
    
    printf("==================\n");
    for (int i=0; i<5; i++) {
        printf("문자열 %d: %s\n", i+1, words[i]);
    }

    return 0;
}
