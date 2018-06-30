/*************************************************************************
	> File Name: 16.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 17时37分04秒
 ************************************************************************/

#include<stdio.h>
#define BASE 1000

inline int get_digit_sum(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int a[400] = {0};
    a[0] = a[1] = 1;
    for(int i = 0; i < 100; i++) {
        for (int j = 1; j <= a[0]; j++) a[j] <<= 10;
        for (int j = 1; j <= a[0]; j++) {
            if (a[j] < BASE) continue;
            a[j + 1] += a[j] /BASE;
            a[j] %= BASE;
            a[0] += (j == a[0]);
        }
        
    }
    int sum = 0;
    for(int i = 1; i <= a[0]; i++) sum += get_digit_sum(a[i]);
    printf("%d\n", sum);
    return 0;
}
