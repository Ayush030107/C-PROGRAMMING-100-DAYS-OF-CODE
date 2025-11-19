#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements (numbers from 0 to %d, one missing): ", n);
    int sum_arr = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum_arr += arr[i];
    }

    int total_sum = n * (n + 1) / 2;
    int missing = total_sum - sum_arr;

    printf("Missing number: %d\n", missing);

    return 0;
}
