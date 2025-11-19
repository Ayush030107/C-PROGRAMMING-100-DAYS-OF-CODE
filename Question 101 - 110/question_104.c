#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int temp = n * (n + 1) / 2;

    int x = (int)sqrt(temp);

    if (x * x == temp) {
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
