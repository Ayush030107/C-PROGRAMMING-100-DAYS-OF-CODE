#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    char genderInput[10];

    printf("Enter gender (MALE / FEMALE / OTHER): ");
    scanf("%s", genderInput);

    if (strcmp(genderInput, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(genderInput, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(genderInput, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid gender\n");
        return 1;
    }

    switch (p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    return 0;
}