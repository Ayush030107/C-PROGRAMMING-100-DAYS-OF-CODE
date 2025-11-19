#include <stdio.h>

int main() {
    int n, i, pos, element;

    printf("Enter the number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > element)
            break;
    }

    
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
