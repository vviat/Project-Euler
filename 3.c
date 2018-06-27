/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月23日 星期一 12时45分52秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX 600851475143
int main() {
    long num = MAX;
    int i, ans;
    for(i = 2; i < sqrt(num); i++) {
        while(num % i == 0) {
            num = num / i;
            ans = i;
        }
    }
    if (num != 1) ans = num;
    printf("%d", ans);
    return 0;
}
