/*************************************************************************
	> File Name: xianxingshai.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月22日 星期日 09时04分46秒
 ************************************************************************/

#include<stdio.h>
#define MAX 400000
int main() {
    int prime[MAX] = {0};
    for(int i = 2;i <= MAX; i++ ) {
        if(!prime[i]) prime[++prime[0]]==i;
        if (prime[0] == 20000) break;
        for(int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX) break; 
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    
    for(int i = 1; i <= 20; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}
