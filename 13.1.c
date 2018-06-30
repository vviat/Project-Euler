/*************************************************************************
	> File Name: 13.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月08日 星期二 10时55分20秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int sum[55] = {0};
    char a[55];
    sum[0] = 50;
    while(~scanf("%s", a))  {
        int i = 49;
        while(i >= 0) {
            sum[50 - i] += a[i] - '0';
            i--;
        }
    }
    for(int i = 1; i <= sum[0]; i++) {
        if(sum[i] < 10) continue;
        sum[i + 1] += sum[i] / 10;
        sum[i] %= 10;
        sum[0] +=(i == sum[0]);
    }
    
    for(int i = sum[0]; i > sum[0] - 10; i--) 
    printf("%d ", sum[i]);
    printf("\n");
    return 0;
}
