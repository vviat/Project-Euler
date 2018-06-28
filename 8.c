/*************************************************************************
	> File Name: 8.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月22日 星期日 11时00分01秒
 ************************************************************************/

#include<stdio.h>
#include "8.h"
int main(){
    long ans = 1, zero = 0,maxN = 0;
    int i = 0;
    for (int i = 0;i < 1000; ++i) {
        if (a[i] != '0') {
        ans *= a[i] - '0';
        } else {
            ++zero;
        }
    if(i >= 13) {
        if (a[i - 13] != '0') {
            ans /= a[i - 13] - '0';
        } else {
            --zero;
        }
    }
    if (zero == 0 && ans > maxN) maxN = ans;
}
    printf("%ld\n", maxN);
    return 0;
}
