#include <stdio.h>
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long M;
        long long A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long product = A * B * C;

        // Case 1: M == 0
        if (M == 0) {
            printf("0\n");
            continue;
        }

        // If product == 0, but M != 0
        if (product == 0) {
            printf("-1\n");
            continue;
        }

        // Case 2: M not divisible 
        if (M % product != 0) {
            printf("-1\n");
            continue;
        }

        long long X = M / product;
        printf("%lld\n", X);
    }

    return 0;
}
