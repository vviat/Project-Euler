/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月02日 星期一 19时57分21秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
int main(){
    int a;
    int b;
    scanf("%d",&a);
    b=a/360*PI;
    printf("%d",b);
    return 0;
}
