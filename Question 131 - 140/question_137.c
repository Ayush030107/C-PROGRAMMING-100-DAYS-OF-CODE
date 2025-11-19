#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;
    char input[10];

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid role\n");
        return 1;
    }

    switch (r) {
        case ADMIN: printf("Welcome Admin!\n"); break;
        case USER:  printf("Welcome User!\n"); break;
        case GUEST: printf("Welcome Guest!\n"); break;
    }

    return 0;
}