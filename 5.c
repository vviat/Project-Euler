/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月01日 星期二 22时37分30秒
 ************************************************************************/

#include<stdio.h>
int gcd(int a, int b) {
    return a % b == 0 ? b : gcd(b, a % b);
}
int main() {
    int ans = 1;
    for (int n = 1; n <= 20; n++) {
        ans *=n / gcd(n, ans);
        
    }
    printf("%d\n", ans);
    return 0;
}
