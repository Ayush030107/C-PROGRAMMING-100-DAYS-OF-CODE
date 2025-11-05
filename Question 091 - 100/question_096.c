#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, start, end;
    char temp;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        start = i;
        while (str[i] != ' ' && str[i] != '\0')
            i++;
        end = i - 1;
        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        if (str[i] != '\0')
            i++;
    }

    printf("%s\n", str);
    return 0;
}
