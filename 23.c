/*************************************************************************
	> File Name: 23.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 19时59分14秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 28123

int isPrime[MAX_N + 5] = {0};
int prime[MAX_N] = {0};
int d[MAX_N + 5]  = {0};
int num[MAX_N + 5] = {0};

int main() {
    d[1] = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!isPrime[i]) { 
            isPrime[i] = i;
            d[i] = i + 1;
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0] && prime[j] * i <= MAX_N; j++) {
            if (i % prime[j] == 0) {
                isPrime[i * prime[j]] = isPrime[i] * prime[j];
                d[i * prime[j]] = d[i] * 
                    (isPrime[i] * prime[j] * prime[j] - 1) / 
                    (isPrime[i] * prime[j] - 1);
                break;
            } else {
                isPrime[i * prime[j]] = prime[j];
                d[i * prime[j]] = d[prime[j]] * d[i];
            }
        }
    }
    d[0] = 0;
    for (int i = 0; i <= MAX_N; i++) {
        d[i] -= i;
        if (d[i] > i) d[++d[0]] = i;
    }
    for (int i = 1; i <= d[0]; i++) {
        for (int j = i; j <= d[0]; j++) {
            if (d[i] + d[j] > MAX_N) break;
            num[d[i] + d[j]] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i <= MAX_N; i++) {
        if (!num[i]) sum += i;
    }
    printf("%d\n", sum); 
    return 0;
}
