#include <stdio.h>

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        int lower = A > C ? A : C;
        puts(lower <= B ? "Yes" : "No");
    }
    return 0;
}