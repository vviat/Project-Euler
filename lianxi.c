/*************************************************************************
	> File Name: lianxi.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 22时33分51秒
 ************************************************************************/
#include <stdio.h>
int jiecheng(int n) {
        if (n == 0) return 1;
        return n * jiecheng(n - 1);

}
int main() {
        int n ;
        scanf("%d", &n); 
        int delta = jiecheng(n);
        printf("%d",delta);
        return 0;

}
