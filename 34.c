/*************************************************************************
	> File Name: 34.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月18日 星期三 19时17分50秒
 ************************************************************************/

#include<stdio.h>
//int jicheng(int n){
    //if(n == 0) return 1;
  //  else return n*jicheng(n - 1);
//}
int is_ok(int n){
    int sum =0;
    int x;
    int a[10] = {1,1,2,6,24,120,720,5040,40320,362880 };
    x=n;
    while(n){
        sum+=a[n%10];
        n/=10;
    }
    return sum == x;
}

int main(){
    int sum=0;
    int i;
    for(i=10; i <= 2540116; ++i){
        if(is_ok(i)){
            sum+=i;
            printf("%d\n",i);
        }
    }
    printf("%d",sum);
return 0;
}
