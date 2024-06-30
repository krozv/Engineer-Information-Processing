#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a;
    int i;
    srand(time(NULL));
    for(i=0; i<6; i++){
        a = rand()%45+1; // 반환한 값에 45를 나누고 +1를 하면 1~45 중 임의의 값이 저장됨
        printf("%d ", a);
    }
    return 0;
}
// 출력
// 4 39 24 23 45 9 