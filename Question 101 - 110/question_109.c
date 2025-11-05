#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid subarray size\n");
        return 0;
    }

    int current_sum = 0, max_sum = 0;

    for(int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;

    for(int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        if(current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, max_sum);

    return 0;
}
