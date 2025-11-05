#include <stdio.h>

int main() {
    int n, i, leftSum = 0, totalSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            printf("pivot index :%d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("no pivot index found : -1\n");

    return 0;
}
