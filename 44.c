/*************************************************************************
	> File Name: 44.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月29日 星期日 10时58分24秒
 ************************************************************************/

#include<stdio.h>
#define MAX 10000
long Penta[MAX + 5] = {0};

int isPentanum(long n){
    long min = 1, max = MAX - 1, mid;
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
    for(long n = 1; n < MAX; n++) {
        Penta[n] = n * (3 * n - 1) >> 1;
    }
    int min = 10000000;
    for(int i = 1; i < MAX; ++i) {
        if(Penta[i + 1] - Penta[i] > min) break;
        for(int j = i + 1; j < MAX; j++) {
            if(Penta[j] - Penta[i] > min) break;
            long n = isPentanum(Penta[j] - Penta[i]);
            long m = isPentanum(Penta[i] + Penta[j]);
            if (n && m) {
                if(min > Penta[j] - Penta[i])
                min = Penta[j] - Penta[i];
            }
        }
    }
    printf("%d", min);

    //for(int i = 0; i <= 10; i++) printf("%d\n", Penta[i]);   
    return 0;

}
