#include "es01.h"

void crypt(char word[], int key) {
    int i = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = (((word[i] - 'a') + key) % 26) + 'a';
        }
        i++;
    }
}

void decrypt(char word[], int key) {
    int i = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = (((word[i] - 'a') - key + 26) % 26) + 'a';
        }
        i++;
    }
}