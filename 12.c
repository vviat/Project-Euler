/*************************************************************************
	> File Name: 12.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 15时51分02秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000000

int prime[MAX + 5] = {0};
int dnum[MAX + 5] = {0};
int xnum[MAX + 5] = {0};
void init(){
    for(int i = 2;i <= MAX; i++ ) {
        if(!prime[i]) { 
            prime[++prime[0]] = i; 
            dnum[i] = 2;
            xnum[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX) break; 
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) {
            //int knum = 0, pre_i = i;
           // while (pre_i % prime[j] == 0) pre_i /= prime[j], knum++;
                dnum[prime[j] * i] = dnum[i] / (xnum[i] + 1) * (xnum[i] + 2);
                xnum[i * prime[j]] = xnum[i] + 1;
                break;    
            } else {
                xnum[i * prime[j]] = 1;
                dnum[prime[j] * i] = dnum[prime[j]] * dnum[i];
            }
        }
    }
}
int main(){
    init();
    int n = 2;
    while(1) {
        int total = 0;
        if(n & 1) {
            total = dnum[n] * dnum[(n + 1) >> 1];
        } else {
            total = dnum[n >> 1] * dnum[n + 1];
        }
        if (total >= 500) break;
        ++n;
    }
    printf("%d\n", n * (n + 1) / 2);
    //printf("%d\n", n);
    return 0;
}
