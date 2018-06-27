/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月01日 星期二 22时12分40秒
 ************************************************************************/

#include<stdio.h>
int check(int a) {
    int b = a , x = 0;
    while(a) {
        x = x * 10 + a % 10;
        a = a / 10;
    }
    if(b == x) return 1;
    return 0;
}

int main() {
    int max = 0;
    for (int i = 999; i >= 100; i--) {
        for(int j = 999;j >= 100; j--) {
            if(check(i * j) && i * j > max) {
                max = i * j;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
