#include <stdio.h>
int main() {
    int N, digit, sum = 0;
    scanf("%d", &N);

    while(N != 0) {
        digit = N % 10;
        sum += digit;
        N /= 10;
    }

    printf("%d", sum);
    return 0;
}
