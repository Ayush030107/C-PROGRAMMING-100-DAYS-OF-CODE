#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, len;

    printf("Enter a full name: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (i = 0; i < len; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && i != len - 1) {
            if (strchr(&str[i+1], ' ') != NULL)
                printf("%c.", str[i+1]);
            else {
                printf(" %s", &str[i+1]);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}
