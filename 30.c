/*************************************************************************
	> File Name: 30.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月18日 星期三 18时54分06秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int is_ok(int n){
    int sum = 0 ;
    int x;
    x = n;
    while(n){
        sum += pow(n%10,5);
        n /= 10;
    }
    return sum == x;
}
int main(){
    int sum = 0;
    int i;
    for(i = 2;i <= 354696; i++){
        if(is_ok(i)){
            sum += i;
            //printf("%d\n", i);
        }
    }
    printf("%d", sum);
return 0;
}
