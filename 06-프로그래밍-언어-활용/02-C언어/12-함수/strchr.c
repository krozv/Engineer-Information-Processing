#include <stdio.h>
#include <string.h>
int main(){
    char a[20] = "Hello";
    char* p = strchr(a, 'l');
    printf("%s", p);
    return 0;
}
// 출력
// llo
// p라는 포인터 변수가 가리키는 문자부터 NULL 전까지 값을 출력