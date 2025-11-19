#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char inputFile[100], outputFile[100], ch;

    printf("Enter input filename: ");
    scanf("%s", inputFile);

    printf("Enter output filename: ");
    scanf("%s", outputFile);

    input = fopen(inputFile, "r");
    if (input == NULL) {
        printf("Error: Cannot open input file.\n");
        return 1;
    }

    output = fopen(outputFile, "w");
    if (output == NULL) {
        printf("Error: Cannot open output file.\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion completed. Output written to %s\n", outputFile);
    return 0;
}