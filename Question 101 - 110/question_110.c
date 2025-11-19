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

    printf("Maximum elements of each window: ");
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = 1; j < k; j++) {
            if(arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d", max);
        if(i != n - k) printf(" ");
    }
    printf("\n");

    return 0;
}
