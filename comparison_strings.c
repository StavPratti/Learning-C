#include <stdio.h>
#include <stdlib.h>

int strcmp(const char s1[], const char s2[]) {

    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') {
            return 0;
        }
        i++;
    }

    if (s1[i] < s2[i]) {
        return -1;
    } 
    return 1;
}

int main() {

    char word1[100];
    char word2[100];

    printf("Give a word:\n");
    scanf("%s", word1);

    printf("Give a word:\n");
    scanf("%s", word2);

    int result = strcmp(word1, word2);

    if (result < 0) {
        printf("%s < %s\n", word1, word2);
    }
    else if (result == 0) {
        printf("%s == %s\n", word1, word2);
    }
    else {
        printf("%s > %s\n", word1, word2);
    }

    return 0;
}