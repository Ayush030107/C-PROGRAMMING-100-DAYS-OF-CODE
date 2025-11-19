#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int len_s = strlen(s);
    int len_t = strlen(t);

    if(len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};

    for(int i = 0; i < len_s; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
