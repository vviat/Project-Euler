/*************************************************************************
	> File Name: 35.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月25日 星期三 18时30分50秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX 1000000

int prime[MAX + 5] = {0};
int prime_num[MAX] = {0};

int is_circular(int x) {
    int n = floor(log10(x));
    int n_value = pow(10, n);
    for(int i = 0; i <n; ++i) {
        int tmp = x / n_value;
        x = (x % n_value) * 10 + tmp;
        if(prime[x] == 1) return 0;
    }
    return 1;
}

int main() {
    int num = 0;
    for(int i = 2;i <= MAX; ++i) {
        if(!prime[i]) prime_num[++prime_num[0]] = i;
        for(int j = 1; j <= prime_num[0]; ++j) {
            if (i * prime_num[j] > MAX) break; 
            prime[i * prime_num[j]] = 1;
            if(i % prime_num[j] == 0) break;
        }
    }
    for(int i = 1; i <= prime_num[0]; i++) {
        if(is_circular(prime_num[i])) {
            num++;
        }
    }
    printf("%d\n",num);
    return 0;
}
