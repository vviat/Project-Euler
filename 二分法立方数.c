/*************************************************************************
	> File Name: 44.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 10时31分18秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int lifang(int n) {
    return n * n * n;
}

int is_lifang(int a){
    int Max = sqrt(a);
    //if(a < 0) Max = -a;
    int min = 1, max = Max, mid;
    mid = (max + min) >> 1;
    while(min <= max) {
        if(lifang(mid) == a) break;
        if(lifang(mid) < a) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
        mid = (max + min) >> 1;
    }
    return lifang(mid) == a;
}
int main() {
    int n;
    scanf("%d",&n);
    if(is_lifang(fabs(n))) printf("是立方数");
    else printf("不是立方数");
    printf("\n");
    return 0;
}
