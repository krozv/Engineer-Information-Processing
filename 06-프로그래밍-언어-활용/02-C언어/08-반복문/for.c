#include <stdio.h>
int main(){
    int i, sum=0;
    for(i=1; i<3; i++)
        sum = sum + i;
    printf("%d\n", sum);
    return 0;
}
// 출력
// 3