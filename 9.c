/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月07日 星期一 16时20分31秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>

int main() {
    int a, b, c, e;
    for (int i = 1; i < 32; ++i) {
        for (int j = i + 1; j <= 32 ; ++j) {
            a = j * j - i * i;
            b = 2 * i * j;
            c = i * i + j * j;
            if (1000 % (a + b + c) == 0) {
                e = (int)pow(1000 / (a + b + c), 3);
                printf("%d\n", e * a * b * c);
                return 0;
            }
        }
    }
    return 0;
}
