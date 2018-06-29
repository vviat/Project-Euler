/*************************************************************************
	> File Name: 9.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月07日 星期一 16时43分38秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c ;
    for (int i = 1; i < 32; ++i) {
        for (int j = i + 1; j <= 32 ; ++j) {
            a = j * j - i * i;
            b = 2 * i * j;
            c = i * i + j * j;
            if (a + b + c == 1000) {
                printf("%d\n", a * b * c);
                return 0;
            }
        }
    }
    return 0;
}
