#include <iostream>
#include <cstring>

char* estrai(char word[]);
void estrai_util(char extraction[], int extraction_index, char word[], int index);

int main() {
    char word[80] = "MarcoStefanoAndreaEnricoGiovannaMatteo";
    std::cout << estrai(word) << std::endl;
    return 0;
}

char* estrai(char word[]) {
    char* extraction = new char[80];
    estrai_util(extraction, 0, word, 0);
    return extraction;
}

void estrai_util(char extraction[], int extraction_index, char word[], int index) {
    if (word[index] == '\0') {
        extraction[extraction_index] = word[index];
        return;
    }

    if (word[index] >= 'A' && word[index] <= 'Z') {
        extraction[extraction_index] = word[index];
        estrai_util(extraction, extraction_index + 1, word, index + 1);
        return;
    }

    estrai_util(extraction, extraction_index, word, index + 1);
}