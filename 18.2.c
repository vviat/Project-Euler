/*************************************************************************
	> File Name: 18.2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 20时24分16秒
 ************************************************************************/

//动态规划(两种状态定义不一样，状态定义不一样　决定怎么推)
#include<stdio.h>
#define MAX 100

int map[MAX][MAX] = {0};
int f[MAX][MAX] = {0};
int keep[MAX][MAX] = {0};
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            scanf("%d", map[i] + j);
        }
    }
    f[0][0] = map[0][0];
    for (int i = 1; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            f[i][j] = 0;
            if(j <= i - 1 && f[i - 1][j] > f[i][j]) {
                f[i][j] = f[i - 1][j];
                keep[i][j] = j;
               // printf("%d %d\n", i, j);
            }
            if(j > 0 && f[i - 1][j - 1] > f[i][j]){
                f[i][j] = f[i - 1][j - 1];
                keep[i][j] = j - 1;
               // printf("%d %d\n", i, j);
            }
            //printf("%d %d\n", i,j);
            f[i][j] += map[i][j];

        }
    }
    int ans = 0, ansj;
    for(int i = 0; i <= n; i++) {
        if(f[n - 1][i] > ans) ans = f[n - 1][i],ansj = i;
    }
    printf("%d\n", ans);
    for(int i = n - 1; i >= 0; i--) {
        printf("(%d, %d)\n", i, ansj);
        ansj = keep[i][ansj];
    }
    return 0;
}
