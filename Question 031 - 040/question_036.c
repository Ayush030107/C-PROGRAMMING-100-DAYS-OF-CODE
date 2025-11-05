#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (hcf = (a < b ? a : b); hcf >= 1; hcf--) {
        if (a % hcf == 0 && b % hcf == 0)
            break;
    }

    printf("HCF (GCD) of %d and %d = %d\n", a, b, hcf);

    return 0;
}
