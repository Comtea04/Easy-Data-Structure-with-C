#include <stdio.h>

#define LINEMAX 256

int main() {
    char str[LINEMAX];
    scanf("%s", str);
    
    for (int i=0; *(str+i)!='\0'; i++) {
        if ('a' <= *(str+i) && *(str+i) <= 'z') *(str+i)-=('a'-'A');        // 'a'와 'A'의 아스키코드 값 차이를 더하거나 뺌
        else if ('A' <= *(str+i) && *(str+i) <= 'Z') *(str+i)+=('a'-'A');
    }
    
    printf("%s\n", str);
    
    return 0;
}
