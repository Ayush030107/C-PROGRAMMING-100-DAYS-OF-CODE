#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);

    swapped = last * (int)pow(10, digits) + (num % (int)pow(10, digits)) - last + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
