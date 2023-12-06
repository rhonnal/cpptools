#include <stdio.h>
#include <string.h>

void search(const char *pattern, const char *text) {
    int pattern_length = strlen(pattern);
    int text_length = strlen(text);
    int index = 0;

    while (index <= text_length - pattern_length) {
        int match_index;

        // Check for pattern match at the current index
        for (match_index = 0; match_index < pattern_length; match_index++) {
            if (text[index + match_index] != pattern[match_index]) {
                break;
            }
        }

        if (match_index == pattern_length) {
            printf("Pattern found at index %d\n", index);
            index += pattern_length;
        } else if (match_index == 0) {
            index += 1;
        } else {
            index += match_index; // slide the pattern by match_index
        }
    }
}

int main() {
    const char text[] = ""; // Enter the entire string here
    const char pattern[] = ""; // Enter the string to be searched here

    search(pattern, text);

    return 0;
}
