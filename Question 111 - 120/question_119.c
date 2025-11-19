#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
    }

    int visited[max + 1];
    for(int i = 0; i <= max; i++) visited[i] = 0;

    for(int i = 0; i < n; i++) {
        if(visited[arr[i]] == 1) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        visited[arr[i]] = 1;
    }

    printf("No repeated element found\n");
    return 0;
}
