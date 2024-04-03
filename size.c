#include<stdio.h>

int main(){
    printf("[----- [송 동 선] [2023078041] -----]\n\n");

    int **x;// int형 더블 포인터 선언

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}