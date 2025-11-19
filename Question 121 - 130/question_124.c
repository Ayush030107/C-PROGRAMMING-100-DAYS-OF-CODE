#include <stdio.h>

int main() {
    FILE *source, *dest;
    char srcFile[100], destFile[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", srcFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    source = fopen(srcFile, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);
    return 0;
}