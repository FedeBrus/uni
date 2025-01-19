#include <cstring>
#include <cctype>
#include "es03.h"

bool check_chars(char word[]) {
    int len = std::strlen(word);
    for (int i = 0; i < len; i++) {
        if (i == 0 || i == len - 1) {
            if (!std::isalnum(word[i]) && word[i] != '_') return false;
        } else {
            if (!std::isalnum(word[i]) && word[i] != '_' && word[i] != '.') return false;
        }
    }

    return true;
}

bool verify_email(char word[]) {
    bool verified = true;
    char* x = std::strchr(word, '@');
    if (x != nullptr) {
        *x = '\0';
        if (std::strlen(word) < 1) {
            verified = false;
        }
        if (std::strlen(x + 1) < 1) {
            verified = false;
        }

        if (!(check_chars(word) && check_chars(x + 1))) {
            verified = false;
        }

    } else {
        verified = false;
    }

    return verified;
}