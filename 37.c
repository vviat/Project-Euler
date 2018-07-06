/*************************************************************************
	> File Name: 37.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月28日 星期六 22时35分33秒
 ************************************************************************/
#include<stdio.h>
#include<math.h>
#define MAX 1000000

int prime[MAX + 5] = {0};
int isPrime() {
    for(int i = 2; i <= MAX; ++i) {
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; ++j) {
            if (i * prime[j] > MAX) break; 
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
}

int tsprime(int n) {
    int x = n, h;
    if(prime[x] != 0) return 0;
    while(x) {
        if(prime[x] != 0) return 0;
        x /= 10;
    }
    h = (int)pow(10, floor(log10(n)));
    x = n;
    while(x) {
        if(prime[x] != 0) return 0;
        x -=(x / h) * h;
        h /= 10;
    }
    return 1;
}

int main() {
    int many = 0, flag = 11;
    for(int i = 1; i <= prime[0]; i++) {
        if(prime[i] < 10) continue;
        if(!tsprime(prime[i])) continue;
        many += prime[i];
        if(!(--flag)) break;
    }
    printf("%d",many);
    return 0;
}

