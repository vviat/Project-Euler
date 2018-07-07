/*************************************************************************
	> File Name: 47.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月07日 星期一 14时45分36秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int dnum[MAX_N + 5] = {0};

int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) { 
            prime[++prime[0]] = i; 
            dnum[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            dnum[prime[j] * i] = dnum[i] + (i % prime[j] != 0);
            if (i % prime[j] == 0) break;
        }
    }
    for (int i = 1; i <= MAX_N - 3; i++) {
        if (dnum[i] ^ 4) continue;
        if (dnum[i + 1] ^ 4) continue; 
        if (dnum[i + 2] ^ 4) continue;
        if (dnum[i + 3] ^ 4) continue;
        printf("%d\n", i);
        break;
    }
        return 0;
}
