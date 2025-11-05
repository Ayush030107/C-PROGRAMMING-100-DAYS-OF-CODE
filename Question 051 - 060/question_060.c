#include <stdio.h>

int main() {
    int n, i, posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    printf("Positive elements = %d\n", posCount);
    printf("Negative elements = %d\n", negCount);
    printf("Zero elements = %d\n", zeroCount);

    return 0;
}
