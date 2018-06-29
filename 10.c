/*************************************************************************
	> File Name: 10.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月22日 星期日 12时04分02秒
 ************************************************************************/

#include<stdio.h>
#define MAX 200000
int prime[MAX + 5] = {0};
int main() {
    int sum = 0;
    for(int i = 2; i <= MAX + 1; ++i) {
        if(!prime[i]) {
            prime[++prime[0]] = i;
            sum += i;
        }
        for (int j = 1;j <= prime[0] && prime[j] * i <= MAX; j++){
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    printf("%d",sum);
    return 0;
}
