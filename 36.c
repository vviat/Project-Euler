/*************************************************************************
	> File Name: 36.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月18日 星期三 20时03分28秒
 ************************************************************************/

#include<stdio.h>
int fz(int n,int base) {
    if (base <= 1) return 0;
    int x = 0;
    while(n){
        x = x*base + n%base;
        n/= base;
    }
    return x;
}

int main(){
    int sum = 0,base2,base10;
    for(int i = 1; i<= 1000000;i++) {
        base2 = fz(i,2);
        base10 = fz(i,10);
        if(base2 == base10 && base10 == i) sum +=i;

    }
    printf("%d\n",sum);
    return 0;
}
