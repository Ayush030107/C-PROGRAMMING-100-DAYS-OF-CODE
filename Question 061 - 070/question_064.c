#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, max = 0, i, digit;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > count[max])
            max = i;
    }

    printf("Digit that occurs most frequently = %d\n", max);

    return 0;
}
