#include <iostream>

using namespace std;

void concatenacion(char *w1, char *w2) {
    char* aux = new char[100];
    copy(w1, w1 + 100, aux);
    int sum1 = 0;
    int sum2 = 0;
    int i;
    for (i = 0; w2[i] != '\0'; ++i) {
        ++sum1;
    }
    for (i = 0; w1[i] != '\0'; ++i) {
        ++sum2;
    }
    for (i = 0; i < sum2; ++i) {
        w1[sum1 + i] = aux[i];
    }
    for (i = 0; w2[i] != '\0'; ++i) {
        w1[i] = w2[i];
    }
}

int main() {
    char *word1 = new char[100];
    char *word2 = new char[100];
    printf("[1] Palabra: ");
    cin >> word1;
    printf("[2] Palabra: ");
    cin >> word2;
    // Antes de la función
    printf("\nWord 1: %s\n", word1);
    printf("Word 2: %s\n", word2);
    concatenacion(word1, word2);
    printf("Word 1: %s\n", word1);
    printf("Word 2: %s\n", word2);
    return 0;
}
