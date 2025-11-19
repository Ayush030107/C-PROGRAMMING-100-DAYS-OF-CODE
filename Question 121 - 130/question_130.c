#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *file;
    char filename[100];
    int n, i;
    struct Student s;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Cannot open file for writing.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter roll: ");
        scanf("%d", &s.roll);
        printf("Enter marks: ");
        scanf("%d", &s.marks);
        fprintf(file, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(file);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    fclose(file);
    return 0;
}