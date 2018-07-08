/*************************************************************************
	> File Name: text1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 18时45分22秒
 ************************************************************************/

#include<stdio.h>
int gcd(int a, int b) {
    return !b ? a : gcd(b, a % b);
}

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a,b));
    return 0;
}
