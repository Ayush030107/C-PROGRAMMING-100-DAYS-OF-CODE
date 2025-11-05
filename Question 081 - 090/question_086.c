#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0, palindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0')
        len++;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
        
    return 0;
}
