/*************************************************************************
	> File Name: 31.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月23日 星期一 18时00分02秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000
int skeep[9][MAX + 5] = {0};
int money[9] = {0, 1, 2, 5, 10, 20, 50, 100, 200};
int f(int k,int n) {
    if(k == 1) return 1;
    if(n < 0) return 0;
    if(n == 0) return 1;
    if(skeep[k][n] == 0)
        skeep[k][n] =  f(k - 1, n) + f(k, n - money[k]);
    return skeep[k][n];
}


int main() {
    printf("%d\n", f(8,1000));

    return 0;
}
