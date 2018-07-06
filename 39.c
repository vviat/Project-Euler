/*************************************************************************
	> File Name: 39.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月07日 星期一 14时53分27秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000

int many[MAX] = {0};

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int AddMany(int a, int b, int c) {
    int sum = 0, p = a + b + c;
    for (int k = p; k <= MAX; k += p) {
        many[k] += 1;
        sum += 1;
    }
    return sum;
}

int main() {
    int a, b, c, p;
    for (int i = 2; i * i <= MAX; i++) {
        for (int j = 1; j < i; j++) {
            if (gcd(i, j) != 1) continue;
                a = i * i - j * j;
                b = 2 * i * j;
                c = i * i + j * j;
                if (a + b + c > MAX) continue;
                AddMany(a, b, c);                   
            }
        }
    int max_num = 1;
    for (int i = 2; i <= MAX; i++) {
            if (many[max_num] < many[i]) max_num = i;              
    }
    printf("%d\n", max_num);
    return 0;
  }
