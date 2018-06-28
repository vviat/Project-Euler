/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月18日 星期三 20时31分54秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000000

int main() {
int prime[MAX + 5] = {0};

    for (int i = 2; i <= MAX; ++i) {
        if(prime[i] == 0)  prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; ++j) {
            if (i * prime[j] > MAX) break;
            prime[i * prime[j]] = 1;
            if( i % prime[j] == 0) break;
        }
    }
    printf("%d\n",prime[6]);
    return 0;
}
