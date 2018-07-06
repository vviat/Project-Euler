/*************************************************************************
	> File Name: 38.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月28日 星期六 20时06分33秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int is_ok(int n, int *result) {
    int num = 0, ret = 0, i = 1, x;
    int a[10] = {0};
    while(num < 9) {
        x = n * i;
        while(x) {
            if(x % 10 == 0) return 0;
            if(a[x % 10]) return 0;
            a[x % 10] = (++num);
            x /= 10;
        }
        ret *= (int)pow(10, floor(log10(n * i)) + 1);
        ret += n * i;
        ++i;
    }
    (*result) = ret;
    return 1;
}

int main() {
    int num, max_num = 0;
    for (int i = 1; i <= 10000; i++) {
        if(!is_ok(i, &num)) continue;
        if(num > max_num) max_num = num;
    }
    printf("%d\n", max_num);
    return 0;
}
