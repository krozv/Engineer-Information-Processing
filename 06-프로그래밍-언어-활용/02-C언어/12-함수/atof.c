#include <stdio.h>
#include <stdlib.h>
int main(){
    char *str_num = "1.0";
    double num = atof(str_num);
    printf("%.2f", num);
    return 0;
}
// 출력
// 1.00