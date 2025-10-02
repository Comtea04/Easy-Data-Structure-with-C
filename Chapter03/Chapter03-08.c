// 주소록 프로그램
// 너무 열심히 짰나
#include <stdio.h>

#define MAX_Infos 5

struct Info {
    char name[11];      // 10자까지
    char tel[12];       // 010-xxxx-yyyy가 010xxxxyyyy형태로 저장
    char address[31];
    char birthday[5];
};

void show_list(struct Info *AddressBook, int size_AddressBook);
void add_info(struct Info *AddressBook, int *size_AddressBook);
void search_info(struct Info *AddressBook, int size_AddressBook);
void delete_info(struct Info *AddressBook, int *size_AddressBook);

// str1과 str2 비교 함수
int strcmpr(char* str1, char* str2) {
    int i=0;
    while (str1[i] == str2[i]) {
        if (str1[i]=='\0' || str2[i]=='\0') break;
        i++;
    }
    
    return !(str1[i] == str2[i]);
}

// 메인 함수
int main() {
    struct Info AddressBook[MAX_Infos];
    int size_AddressBook = 0;
    
    char cursor;
    int running = 1;
    while (running) {
        printf("\n주소록 프로그램. 원하는 기능을 선택하세요\n");
        printf("1: 목록보기, 2: 추가, 3: 검색, 4: 삭제, 0: 종료\n");
        printf("-------------------------------------------: ");
        scanf(" %c", &cursor);
        
        switch (cursor) {
        case '1':
            show_list(AddressBook, size_AddressBook);
            break;
        
        
        case '2':
            add_info(AddressBook, &size_AddressBook);
            break;
            
        case '3':
            search_info(AddressBook, size_AddressBook);
            break;
        
        case '4':
            delete_info(AddressBook, &size_AddressBook);
            break;
        
        case '0':
            running = 0;
            break;
        
        default:
            printf("잘못된 입력입니다. 1~4중에 입력하세요.\n");
        }
    }
    return 0;
}

void show_list(struct Info *AddressBook, int size_AddressBook) {
    printf("목록보기\n");

    for (int i=0; i<size_AddressBook; i++) {
        printf("이름:%s\t전화번호:%s\t주소:%s\t생일:%s\n", AddressBook[i].name, AddressBook[i].tel, AddressBook[i].address, AddressBook[i].birthday);
    }
}

void add_info(struct Info *AddressBook, int *size_AddressBook) {
    printf("추가하기\n");

    if (*size_AddressBook == MAX_Infos) {
        printf("정원이 초과되어 추가할 수 없습니다. 현재인원: %d\n", *size_AddressBook);
        return;
    }
    
    printf("추가할 사람의\n");
    printf("이름: ");
    scanf("%s", (AddressBook[*size_AddressBook]).name);
    
    printf("전화번호: ");
    scanf("%s", AddressBook[*size_AddressBook].tel);
    
    printf("주소: ");
    scanf("%s", AddressBook[*size_AddressBook].address);
    
    printf("생일: ");
    scanf("%s", AddressBook[*size_AddressBook].birthday);
    
    (*size_AddressBook) ++;
    printf("추가 완료\n");
    
}

void search_info(struct Info *AddressBook, int size_AddressBook) {
    printf("이름으로 찾기");
    
    char name[11];
    printf("찾으려는 이름: ");
    scanf("%s", name);
    
    int idx = -1;
    for (int i=0; i<size_AddressBook; i++) {
        if (!strcmpr(AddressBook[i].name, name)) idx = i;
    }
    
    if (idx == -1) printf("대상이 없습니다.\n");
    else {
        printf("찾았습니다.\n");
        printf("이름: %s\n", AddressBook[idx].name);
        printf("전화번호: %s\n", AddressBook[idx].tel);
        printf("주소: %s\n", AddressBook[idx].address);
        printf("생일: %s\n", AddressBook[idx].birthday);
    }
}
void delete_info(struct Info *AddressBook, int *size_AddressBook) {
    printf("이름으로 찾아 삭제하기\n");
    
    char name[11];
    printf("삭제할 대상의 이름: ");
    scanf("%s", name);

    int idx = -1;
    for (int i=0; i<*size_AddressBook; i++) {
        if (!strcmpr(AddressBook[i].name, name)) {
            idx = i;
            break;
        }
    }
    
    if (idx == -1) printf("대상이 없습니다.\n");
    else {
        for (int i=idx; i<*size_AddressBook-1; i++) {
            AddressBook[i] = AddressBook[i+1];
        }
        (*size_AddressBook) --;
        
        printf("삭제 완료\n");
    }
}
