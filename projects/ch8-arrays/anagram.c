// Check if two words are anagrams
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define ALPHABET_SIZE 26

int main() {
    char first_word[] = { "smartest" };
    char second_word[] = { "mattress" };

    int comparator_array[ALPHABET_SIZE] = { 0 };

    // Casting to unsigned char before calling isalpha and tolower
    // avoids undefined behavior if a char is
    // signed and its value happens to be negative
    size_t length1 = strlen(first_word);
    for (size_t i = 0; i < length1; ++i) {
        if (isalpha((unsigned char)first_word[i])) {
            int index = tolower((unsigned char)first_word[i]) - 'a';
            comparator_array[index]++;
        }
    }

    size_t length2 = strlen(second_word);
    for (size_t i = 0; i < length2; ++i) {
        if (isalpha((unsigned char)second_word[i])) {
            int index = tolower((unsigned char)second_word[i]) - 'a';
            comparator_array[index]--;
        }
    }


    bool is_anagram = true;

    // We use the fact that a non-zero will return true
    for (int i = 0; i < 26; ++i) {
        if (comparator_array[i]) {
            is_anagram = false;
            break;
        }
    }

    if(is_anagram) {
        printf("The words are anagrams.\n");
    }
    else {
        printf("The words are not anagrams.\n");
    }

    return 0;

}