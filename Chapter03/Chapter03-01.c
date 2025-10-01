#include <stdio.h>

int main() {
    int grades[10][6];
    
    grades[0][0] = 1;
    grades[0][1] = 80;
    grades[0][2] = 70;
    grades[0][3] = 90;
    grades[0][4] = grades[0][1]+grades[0][2]+grades[0][3];
    grades[0][5] = grades[0][4] / 3;
    
    // 이 아래부터는 자유롭게 저장
    grades[1][0] = 2;
    grades[1][1] = 100;
    grades[1][2] = 90;
    grades[1][3] = 80;
    grades[1][4] = grades[1][1]+grades[1][2]+grades[1][3];
    grades[1][5] = grades[1][4] / 3;
    
    grades[2][0] = 3;
    grades[2][1] = 70;
    grades[2][2] = 80;
    grades[2][3] = 90;
    grades[2][4] = grades[2][1]+grades[2][2]+grades[2][3];
    grades[2][5] = grades[2][4] / 3;

    // 귀찮으니까 반복문을 이용해 같은 값 넣었음(이런 문제에 시간 쓰는 게 아까움)
    for (int i=3; i<10; i++) {
        grades[i][0] = i+1;
        grades[i][1] = 100;
        grades[i][2] = 90;
        grades[i][3] = 80;
        grades[i][4] = grades[i][1]+grades[i][2]+grades[i][3];
        grades[i][5] = grades[i][4] / 3;
    }

    // 출력
    printf("학번 \t국어 \t영어 \t수학 \t총점 \t평균\n");
    printf("******************************************\n");
    for (int i=0; i<10; i++) {
        printf("%d \t%d \t%d \t%d \t%d \t%d\n", grades[i][0], grades[i][1], grades[i][2], grades[i][3], grades[i][4], grades[i][5]);
    }

    return 0;
}
