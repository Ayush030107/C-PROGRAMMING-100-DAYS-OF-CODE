#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter details (format -> Name Roll Marks): ");
    scanf("%s %d %d", s.name, &s.roll, &s.marks);

    display(s);

    return 0;
}