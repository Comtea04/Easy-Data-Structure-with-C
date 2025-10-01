// 입력된 문자열 역순으로 출력
// 문자열 역순으로 변환보다 출력이 쉬움
#include <stdio.h>

#define LINEMAX 256

// // 출력만 하는 버전
// int main() {
//     char str[LINEMAX];
//     scanf("%s", str);
    
//     int len=0;
//     while (str[len] != '\0') len++;
    
//     for (int i = len-1; i>=0; i--) printf("%c", str[i]);
//     printf("\n");
    
//     return 0;
// }

// 변환하는 버전
int main() {
    char str[LINEMAX];
    scanf("%s", str);
    
    int len=0;
    while (str[len] != '\0') len++;
    
    for (int i = 0; i<len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    
    printf("%s\n", str);
    
    return 0;
}
