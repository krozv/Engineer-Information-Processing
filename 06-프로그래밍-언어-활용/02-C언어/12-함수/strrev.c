#include <stdio.h>
#include <string.h>
int main(){
    char a[20] = "Hello";
    strrev(a);
    printf("%s", a);
    return 0;
}
// 출력
// olleH
// gcc에서는 strrev 없어서 안돌아감 ㅠ