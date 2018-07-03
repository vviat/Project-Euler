/*************************************************************************
	> File Name: 26.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 09时19分55秒
 ************************************************************************/

#include<stdio.h>

int get_circle_length(int d) {
    int first_ind[1000] = {0};
    int y = 1, ind = 1;
    do{
        first_ind[y] = (ind++);//右值（左值　连续更改的变量）ｆｉｒ——ｉｎｄ等于ｉｎｄ＋＋之前的值
        y = (y * 10) % d;
    } while (y && first_ind[y] == 0);
    if(y == 0) return 0;
    return ind - first_ind[y];
}


int main() {
    int max_length = 0, ans_num, temp;
    // while(scanf("%d", &i) != EOF)
    for(int i = 2; i < 1000; i++ ) {
        temp = get_circle_length(i);
        if(temp > max_length) {
        ans_num = i;
        max_length = temp;
    }
}
    printf("%d %d\n", ans_num, max_length);
    return 0;
}
