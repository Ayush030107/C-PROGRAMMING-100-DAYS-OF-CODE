#include <stdio.h>

int main() {
    int n, i, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to insert and its position: ");
    scanf("%d %d", &element, &pos);

    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
