/*************************************************************************
	> File Name: 17.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月22日 星期日 17时04分25秒
 ************************************************************************/

#include<stdio.h>
int Getnum(int i){
    int a[20] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
    int b[10] = {0,0,6,6,5,5,5,7,6,6};
    if(i < 20) {
        return a[i];
    } else if (i < 100) {
        return b[i / 10] + a[i % 10];
    } else if (i < 1000) {
        if (i % 100 == 0){
            return a[i / 100] + 7;
        } else {
            return a[i / 100] +Getnum(i%100) + 10;
        }
    }   
     else if (i = 1000){
         return 11;
    } else {
        return 0;
    }
}



int main(){
    int ans = 0;
    for(int i = 1; i <= 1000; ++i){
    ans +=Getnum(i);
    
    }
    printf("%d\n",ans);
    return 0;
}
