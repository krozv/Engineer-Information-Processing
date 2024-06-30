#include <stdio.h>
int main(){
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int *p[3] = {a[2], a[0], a[1]};
    printf("%d %d %d\n", a[0][0], a[1][0], a[2][0]);
    printf("%d %d %d\n", *a[0], *a[1], *a[2]);
    printf("%d %d %d\n", p[1][0], p[2][0], p[0][0]);
    printf("%d %d %d\n", *p[1], *p[2], *p[0]);
    return 0;
}
// 출력
// 1 3 5
// 1 3 5
// 1 3 5
// 1 3 5