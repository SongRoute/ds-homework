#include <stdio.h>

//학생 정보를 포함하는 구조체 정의
struct student1 {
    char lastName;
    int studentId;
    char grade;
};
//typedef를 사용하여 구조체 정의
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf("[----- [송 동 선] [2023078041] -----]\n\n");

    //st1 생성 초기화 출력
    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    //st2 생성 초기화 출력, typedef 사용해 정의했기 때문에 struct필요 없음
    student2 st2 = {'B', 200, 'B'};
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    //st3 생성, st2를 st3에 대입, 출력
    student2 st3;
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    //equality test
    //개별멤버에 대해 동등성을 검사하는 방식으로 변경
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)
        printf("\nequal\n");
    else
        printf("\nnot equal\n");
    return 0;
}