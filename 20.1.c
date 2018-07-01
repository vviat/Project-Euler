/*************************************************************************
	> File Name: 20.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 19时09分33秒
 ************************************************************************/
//输出１－１００；
#include<stdio.h>
int main(int i) {
    static int num = 1;
    printf("%d\n", num);
    if(num == 100) return 0;
    num++;
    return main();
}
