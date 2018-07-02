/*************************************************************************
	> File Name: 23.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月09日 星期三 13时43分36秒
 ************************************************************************/

#include<stdio.h>
#define MAX 10000
int prime[MAX + 5] = {0};
int dnum[MAX + 5] = {0};
int xnum[MAX + 5] = {0};
void init() {
    for(int i = 2; i <= MAX; i++) {
        if(!prime[i]) {
            prime[++prime[0]] = i;
            dnum[i] = i + 1;
            xnum[i] = i * i - 1;
        }
        for(int j =1; j<=prime[0]; j++) {
        if(i * prime[j] > MAX) break; 
            prime[i * prime[j]] = 1; 
            if(i % prime[j] == 0) { 
                xnum[i * prime[j]] = xnum[i] * prime[j] + prime[j] - 1; 
                dnum[i * prime[j]] = dnum[i] * xnum[i * prime[j]] / xnum[i];
                break;
            } else { 
                dnum[i * prime[j]] = dnum[i] * dnum[prime[j]];
                xnum[i * prime[j]] = xnum[prime[j]];
            } 
        }
    }
} 
int main(){
    init();
    for(int i = 2; i <= MAX; ++i) { 
        dnum[i] -= i; 
    } 
    int res = 0; 
    for(int i = 2; i <= MAX; ++i) { 
        if(dnum[i] == i) continue; 
        if(dnum[i] > MAX) continue; 
        if(dnum[dnum[i]] == i) res += i;  
    } 
    printf("%d\n", res);
    return 0;  
}
