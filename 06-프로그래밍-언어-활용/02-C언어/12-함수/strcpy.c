#include <stdio.h>
#include <string.h>
int main(){
    char a[20] = "Hello";
    char b[10] = "Soojebi";
    char c[10] = "Hello";
    strcpy(a, b);
    printf("%s %s\n", a, b);
    strncpy(c, b, 3);
    printf("%s %s", c, b);
    return 0;
}
// 출력
// Soojebi Soojebi
// Soolo Soojebi