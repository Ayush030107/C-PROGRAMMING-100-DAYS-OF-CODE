#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    int capitalize = 1;
    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i]) && capitalize) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else if(isspace(str[i])) {
            capitalize = 1;
        }
    }

    printf("Title case: %s\n", str);

    return 0;
}
