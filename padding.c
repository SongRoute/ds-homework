#include <stdio.h>

//학생정보 구조체 선언
struct student {
    char lastName[13]; // 13 bytes
    int studentId; // 4 bytes
    short grade; // 2 bytes
};

int main()
{
    printf("[----- [송 동 선] [2023078041] -----]\n\n");

    struct student pst; //구조체변수 pst 선언

    printf("size of student = %ld\n", sizeof(struct student)); //구조체 전체의 크기 출력
    printf("size of int = %ld\n", sizeof(int));//int형의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short형의 크기 출력

    return 0;
}