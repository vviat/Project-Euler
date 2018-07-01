/*************************************************************************
	> File Name: 18.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 20时09分10秒
 ************************************************************************/
//动态规划
#include<stdio.h>
#include<stdio.h>
#define MAX 100

int map[MAX][MAX] = {0};
int f[MAX][MAX] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            scanf("%d", map[i] + j);
        }
    }
    for (int i = 0; i < n; i++) {
        f[n - 1][i] = map[n - 1][i];
    }
    for (int i = n - 2; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            f[i][j] = map[i][j];
            if(f[i + 1][j] > f[i + 1][j + 1]) {
                f[i][j] += f[i + 1][j];
            } else {
                f[i][j] += f[i + 1][j + 1];
            }
        }
    }
    
    printf("%d\n",f[0][0]);
    return 0;
}
