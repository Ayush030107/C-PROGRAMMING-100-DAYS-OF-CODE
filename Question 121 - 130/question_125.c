#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[256];

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fputc('\n', file);
    fputs(text, file);

    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}