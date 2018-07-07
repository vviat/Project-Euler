/*************************************************************************
	> File Name: 45.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 14时09分08秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int is_pnum(int64_t n) {
    int64_t head = 1, tail = n, mid;
    while(head <= tail) {
        mid = (head + tail) >> 1;
        int64_t value = mid * (3 * mid - 1) / 2;
        if (value == n) return 1;
        if (value > n) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}

int main() {
    int64_t n = 144;
    while(!is_pnum(n *(2 * n - 1))) ++n;
    printf("%" PRId64"\n",n * (2 * n - 1));
    return 0;
}
