/*************************************************************************
	> File Name: 24.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 19时39分18秒
 ************************************************************************/

#include<stdio.h>
int get_num(int n, int *num, int delta) {
    int rank = n /delta + 1, now = 0;
    for (int i = 0; i <= 10; i++) {
        now += !(num[i]);
        if(now == rank) return i;
    }
    return -1;
}


int main() {
    int n = 999999;//变换次数
    int num[10] = {0};//那种字符用过了
    int delta = 362880;//变化一次的增量

    for(int i = 0; i < 10; i++) {
        int digit = get_num(n, num, delta);
        printf("%d",digit);
        num[digit] = 1;
        n %= delta;
        if(i == 9) break;
        delta /= (9 - i);
    }
    
    return 0;
}
