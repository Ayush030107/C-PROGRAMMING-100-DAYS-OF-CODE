#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1;
    struct Student *ptr = &s1; 

    printf("Enter data in this format: Name Roll Marks\n");

    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}