#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100], word[100];
    int i = 0, len = 0, maxLen = 0, j = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = j;
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    printf("The longest word in sentence is : %s\n", longest);

    return 0;
}
