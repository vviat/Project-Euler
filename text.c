/*************************************************************************
	> File Name: text.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月18日 星期三 23时11分08秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    int *p;
    p=&n;
    n = 5;
    printf("%d\n", sizeof(p));
    char *q;
    printf("%d\n",sizeof(q));
    scanf("%d",&n);
    int k = n;
    printf(" k = %d  n = %d", k, n);
    n = 5;
    printf("k = %d n = %d ", k, n);
    return 0;
}
