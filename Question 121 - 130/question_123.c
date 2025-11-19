#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch, filename[100];
    int characters = 0, words = 0, lines = 0, inWord = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') lines++;
        if (isspace(ch)) inWord = 0;
        else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }
    if (characters > 0 && ch != '\n') lines++;

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}