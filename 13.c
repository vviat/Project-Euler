/*************************************************************************
	> File Name: 13.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月22日 星期日 18时42分24秒
 ************************************************************************/

#include<stdio.h>
#define Base 10
int main(){
    int sum[55] = {0};
    char a[55];
    sum[0] = 50;
    while(~scanf("%s",a)){
        int i = 49;
        while (i >= 0) {
            sum[50 - i] += a[i] - '0';
            i--;
        }
    }
    for(int i = 1; i <= sum[0]; i++) {
        if(sum[i] < Base) continue;
        sum[i + 1] += sum[i] / Base;
        sum[i] %= Base;
        sum[0] += (i == sum[0]);
    }  
    for (int i = sum[0]; i > sum[0] - 10; i--)
    printf("%d ",sum[i]);
    printf("\n");
    return 0;
}
