#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    char word[15]; 
    printf("Enter the word: ");
    scanf("%s", word);

    int length = strlen(word);

    int frequency[256] = {0};
    for (int i = 0; i < length; ++i) {
        frequency[(int)word[i]]++;
    }

    unsigned long long num_anagrams = factorial(length);
    for (int i = 0; i < 256; ++i) {
        if (frequency[i] > 1) {
            num_anagrams /= factorial(frequency[i]);
        }
    }

    printf("Number of possible anagrams: %llu\n", num_anagrams);

    return 0;
}