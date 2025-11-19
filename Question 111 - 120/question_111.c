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

    printf("First negative integers in each window: ");
    for(int i = 0; i <= n - k; i++) {
        int first_negative = 0;
        for(int j = 0; j < k; j++) {
            if(arr[i + j] < 0) {
                first_negative = arr[i + j];
                break;
            }
        }
        printf("%d", first_negative);
        if(i != n - k) printf(" ");
    }
    printf("\n");

    return 0;
}
