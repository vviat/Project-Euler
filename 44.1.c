/*************************************************************************
	> File Name: 44.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月02日 星期三 16时53分34秒
 ************************************************************************/

#include<stdio.h>
#define MAX 5000
long Penta[MAX + 5] = {0};

int isPentanum(int n){
    int min = 1, max = MAX - 1, mid;
    mid = (max + min) >> 1;
    while(min <= max) {
        if(Penta[mid] > n) {
            max = mid - 1;
        } else if(Penta[mid] < n) {
            min = mid + 1;
        } else {
            return 1;
        }
        mid = (min + max) >> 1;
    }
    return 0;
}

int main() {
    for(int n = 1; n < MAX; n++) {
        Penta[n] = n * (3 * n - 1) >> 1;
    }
    int min = 6000000;
    for(int i = 1; i < MAX; ++i) {
        if(Penta[i + 1] - Penta[i] > min) break;
        for(int j = i + 1; j < MAX; j++) {
            if(Penta[j] - Penta[i] > min) break;
            if((isPentanum(Penta[j] - Penta[i])) && (isPentanum(Penta[i] + Penta[j]))) {
                min = Penta[j] - Penta[i];
                printf("%d",min);
                return 0;
            }
        }
    }
    return 0;

}
