/*************************************************************************
	> File Name: 34.lianxi.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月05日 星期六 17时00分20秒
 ************************************************************************/

#include<stdio.h>

int is_ok(int n) {
    int x;
    int sum = 0;
    x = n;
    int a[10] = {1, 1 , 2, 6, 24, 120, 720, 5040,40320,36280} ;
    while(n){
        sum += a[n % 10];
        n /= 10;
    }
    return sum == x;

}
int main() {
    int num = 0;
    for(int i = 10; i <= 1000000; i++){
        if(is_ok(i))
        num += i;
    }
    printf("%d", num);
    return 0;
}
