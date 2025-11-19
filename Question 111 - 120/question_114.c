#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);

    int n = strlen(s);
    int freq[256] = {0};
    int start = 0, max_len = 0;

    for(int end = 0; end < n; end++) {
        freq[(int)s[end]]++;

        while(freq[(int)s[end]] > 1) {
            freq[(int)s[start]]--;
            start++;
        }

        int window_len = end - start + 1;
        if(window_len > max_len) {
            max_len = window_len;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", max_len);

    return 0;
}
