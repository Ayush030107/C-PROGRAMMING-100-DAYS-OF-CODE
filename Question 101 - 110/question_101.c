#include <stdio.h>

int main() {
    int n, target, i, first = -1, last = -1;

    printf("Enter size of array: "); 
    scanf("%d", &n);
    int nums[n];

    printf("Enter elements of sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("The index of first and last occurrence: %d, %d\n", first, last); 
    return 0;
}
