#include <stdio.h>

int main(void){
    // 1~10������ �հ踦 ���Ͻÿ�.
    int i = 1;
    int sum =0;

    while( i <= 10 ){
        sum += i;      // sum = sum + i;
        i++;           // i = i + 1;
        // sum = 0 + 1;
        // sum = 1 + 2;
        // sum = (1 + 2) + 3;
        // ...
    }

    printf(" �հ� :  %d\n", sum);

}