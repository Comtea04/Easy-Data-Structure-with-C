#include <stdio.h>

#define LINEMAX 256

int main() {
    char str1[LINEMAX];
    char str2[LINEMAX];
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i]=='\0' || str2[i]=='\0') break;
        
        i ++;
    }
    
    if (str1[i] != str2[i]) 
        printf("다름\n");
    else
        printf("같음\n");
    
    return 0;
}
