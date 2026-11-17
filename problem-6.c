#include <stdio.h>
int main() {
    int N, count = 0;
    scanf("%d", &N);

    if(N == 0) {
        count = 1;
    } else {
        while(N != 0) {
            count++;
            N /= 10;
        }
    }

    printf("%d", count);
    return 0;
}
