/*************************************************************************
	> File Name: 33.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月23日 星期一 20时27分02秒
 ************************************************************************/

#include<stdio.h>
int yuefen(int x, int y) {
    int x1, x2, y1, y2;
    x1 = x / 10;
    x2 = x % 10;
    y1 = y / 10;
    y2 = y % 10;
    if ((x1 == y1) && (x2 != 0 || y2 != 0)) {
        if(x2 * y == y2 * x) return 1;
    }
    if ((x1 == y2) && (x2 != 0 || y1 != 0)) {
        if(x2 * y == y1 * x) return 1;   
    }
    
    if ((x2 == y1) && (x1 != 0 || y2 != 0)) {
        if(x1 * y == y2 * x) return 1;
    }
    if ((x2 == y2) && (x1 != 0 || y1 != 0)) {
        if(x1 * y == y1 * x) return 1;   
    }
    else return 0;
}


int main() {
    int x, y;
    int ans;
    int tmp;
    for(x = 10; x <= 99; x++) {
        for(y = x; y <= 99; y++) {
            if(yuefen(x, y)) {
                tmp *= x;
                ans *= y;
            }
        }
    }
    

    printf("%d", tmp); 
    printf("%d", ans); 

    return 0;
} 
