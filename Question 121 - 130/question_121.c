#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if(len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "Name: %s Age: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
