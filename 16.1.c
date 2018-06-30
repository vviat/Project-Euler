/*************************************************************************
	> File Name: 16.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月08日 星期二 14时23分43秒
 ************************************************************************/

#include<stdio.h>
#define BASE 1000

inline int get_ditist(int n) {
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
    for(int i = 1; i <= 1000; i++){ 
        for(int j = 1; j <= a[0]; j++) a[j] *= 2; 
    for(int j = 1; j <= a[0]; j++) {
        if(a[j] < BASE) continue;
        a[j + 1] += a[j] / BASE;
        a[j] = a[j] % BASE;
        a[0] += (j == a[0]);
        }
    } 
    int sum = 0;
    for(int i = 1;i <= a[0]; i++) {
        sum += get_ditist(a[i]);
    }
    printf("%d", sum);
    printf("\n");

    return 0;
}
