#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int g, i;

    for (g = 0; g < 5; g++) {
        for (i = 1; i <= groups[g]; i++)
            printf("*\n");
        printf("\n");
    }

    return 0;
}
