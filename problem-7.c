#include <stdio.h>
int main() {
    int N, digit, rev = 0;
    scanf("%d", &N);

    while(N != 0) {
        digit = N % 10;
        rev = rev * 10 + digit;
        N /= 10;
    }

    printf("%d", rev);
    return 0;
}
