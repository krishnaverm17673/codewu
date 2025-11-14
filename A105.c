#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;

    int x = sqrt(total);

    if ((long long)x * x == total)
        printf("%d\n", x);
    else
        printf("-1\n");

    return 0;
}
