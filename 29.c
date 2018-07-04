/*************************************************************************
	> File Name: 29.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月06日 星期日 09时55分16秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
struct Tuple {
    int p, a;//pi,的ai次方

};//这个元组表示一个数字中不同素因子的数量下面的１２是指小于１０种
struct Tuple M[10000][12] = {0};

int prime[105] = {0};
int M_num = 0;

void get_M(int a, int b, struct Tuple *M) {
    int M_len = 0;
    while (a != 1) {
        int p_num = 0, pre = prime[a];
        while(a % pre == 0) {
            a /= pre;
            p_num++;
        }
        M[M_len].p = pre;
        M[M_len].a = p_num * b;
        M_len++;
    }
}
int main() {
    for(int i = 2; i <= 100; i++) {
        if(prime[i]) continue;
        for(int j = i; j <= 100;j += i) {
            if (prime[j]) continue;
            prime[j] = i;
        }
    }//标记一个数种最小素因子
    for (int a = 2; a <= 100; a++) {
        for(int b = 2; b <= 100; b++) {
            struct Tuple temp_M[4] = {0} ;
            get_M(a, b, temp_M);
            int flag = 1;
            for(int i = 0; i <= M_num && flag; i++) {
                flag = memcmp(M[i], temp_M, sizeof(temp_M));
            }
            if (flag) {
                memcpy(M[M_num++], temp_M, sizeof(temp_M));
            }
        }
    }
    printf("%d\n", M_num);
    return 0;
}
