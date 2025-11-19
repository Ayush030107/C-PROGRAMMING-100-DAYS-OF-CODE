#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char name[100];
    int age;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);

    printf("Data saved successfully to %s\n", filename);
    return 0;
}