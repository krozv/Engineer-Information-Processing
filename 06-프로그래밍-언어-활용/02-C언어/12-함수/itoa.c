#include <stdio.h>
#include <stdlib.h>
int main(){
    char buffer[4] = {NULL}; // 문자형 배열 생성
    int num = 123;
    itoa(num, buffer, 10);
    printf("%s", buffer);
    return 0;
}
// 출력
// 123