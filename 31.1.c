/*************************************************************************
	> File Name: 31.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月23日 星期一 18时51分25秒
 ************************************************************************/

#include<stdio.h>
int many[8] = {1, 2, 5, 10, 20, 50, 100, 200};
int d[205] = {0};
int main() {
    d[0] = 1;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j <= 200 - many[i]; j++) {
            d[j + many[i]] += d[j];
        }
    }

    printf("%d\n" , d[200]);
    return 0;
}
