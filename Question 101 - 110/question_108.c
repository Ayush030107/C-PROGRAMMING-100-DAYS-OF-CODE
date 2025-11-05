#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix[n], suffix[n], answer[n];

    prefix[0] = 1;
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    suffix[n-1] = 1;
    for(int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    for(int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    printf("Answer array: ");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n-1) printf(",");
    }
    printf("\n");

    return 0;
}
