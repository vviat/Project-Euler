/*************************************************************************
	> File Name: 7.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月03日 星期四 14时41分46秒
 ************************************************************************/
//最小素因子
#include<stdio.h>
#define MAX 1000000
int prime[MAX + 5] = {0};

int Prime() {
    for (int i = 2; i * i <= MAX; i++) {
        if(prime[i] == 0) 
        for(int j = 2 * i; j <= MAX; j = j + i)
        prime[j] = 1;
    }
    return 0;
}

int main(){
    Prime();
    int num = 0;
    //printf("%d", prime[5]);
    for(int i = 2; ; i++){
        if(prime[i] == 0) num++; 
        if(num == 10001){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
