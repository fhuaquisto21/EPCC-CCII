#include <iostream>

using namespace std;

void concatenacion(char * w1, char * w2) {


}

int main() {
    char * word1;
    char * word2;
    printf("[1] Palabra: ");
    cin >> word1;
    printf("[2] Palabra: ");
    cin >> word2;
    // Antes de la función
    printf("\nWord 1: %s\n", word1);
    printf("Word 2: %s\n", word2);
    concatenacion(word1, word2);
    return 0;
}
