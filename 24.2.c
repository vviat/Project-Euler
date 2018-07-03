/*************************************************************************
	> File Name: 24.2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 20时42分57秒
 ************************************************************************/

#include<stdio.h>
int jiecheng(int n) {
    if (n == 0) return 1;
    return n*jiecheng(n - 1);
}
int get_num(int n, int k, int *num, int delta) {
    int rank = k /delta + 1, now = 0;
    for (int i = 0; i < n; i++) {
        now += !(num[i]);
        if(now == rank) return i;
    }
    return -1;
}

int main() {
    int n , k;//n为几个数，ｋ为你想变换次数
    
    while(scanf("%d%d", &n, &k) != EOF) {
    int num[100] = {0};//那种字符用过了
    int delta = jiecheng(n - 1);//变化一次的增量
    //printf("%d\n",delta);
    k = k - 1;
    for(int i = 0; i < n; i++) {
        int digit = get_num(n, k, num, delta);
        printf("%d\n",digit);
        num[digit] = 1;
        k %= delta;
        if(i == n - 1) break;
        delta /= (n - 1 - i);

    }

}
    return 0;
}
