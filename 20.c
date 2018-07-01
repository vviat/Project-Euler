/*************************************************************************
	> File Name: 20.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 18时26分28秒
 ************************************************************************/

#include<stdio.h>
int ans[200] = {0};
int main() {
    ans[0] = ans[1] = 1;
    for(int i = 2; i <= 100; i++ ) {
        for(int j = 1; j <= ans[0]; j++)  ans[j] *= i;
        for(int j = 1; j <= ans[0]; j++) {
            if(ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            if(j == ans[0]) ++ans[0];//ans[0] += (j == ans[0]);
        }
    }
    int sum = 0;
    for (int j = 1; j <= ans[0]; j++) sum += ans[j];
    printf("%d\n", sum);
    return 0;
}

