/*************************************************************************
	> File Name: 38.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 09时26分52秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int isPandigital(int x, int *num) {
    while(x) {
        if (x % 10 == 0) return 0;
        if (num[x % 10]) return 0;
        num[x % 10] = 1;
        x /= 10;
    }
    return 1;
}

int check(int x) {
    int num[10] = {0};
    int temp_ans = 0;
    int value;
    for(int i = 1; ; i++) {
        int t = x * i;
        if(!isPandigital(t, num)) return 0;
        value = pow(10, floor(log10(t)) + 1);
        temp_ans = temp_ans *value + t;
        int digit = floor(log10(temp_ans)) + 1;
        if(digit > 9) return 0;
        if(digit == 9) break;
    }
    return 1;
}

int main() {
    int ans = 0;
    for (int i = 1; i <= 10000; i++) {
        int x = check(i);
        ans = ans < x ? ans : x;
    }
    printf("%d", ans);
    return 0;
}
