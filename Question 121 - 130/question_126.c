#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }

    printf("File opened successfully.\n\n");

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}