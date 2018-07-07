/************************mZ************************************************
	> File Name: 46.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 15时52分33秒
 ************************************************************************/

#include <stdio.h>
#define MAX 10000
int a[MAX + 5] = {0};
int prime[MAX + 5] = {0};
 
int main() {
    for (int i = 2; i <= MAX; i++) {
        if (!prime[i]) { prime[++prime[0]] = i; a[i] = 1; }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    for (int i = 1; i <= prime[0]; i++) {
        for (int n = 1; ; n++) {
            if (prime[i] + 2 * n * n > MAX) break;
            a[prime[i] + 2 * n * n] = 1;
        }
    }
    for (int i = 9; i <= MAX; i += 2){
        if (a[i]) continue;
        printf("%d\n", i);
        break;
    }
    return 0;
}
