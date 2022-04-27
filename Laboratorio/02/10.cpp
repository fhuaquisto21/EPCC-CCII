#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    printf("Escriba una palabra: ");
    getline(cin, word);

    cout << endl;
    for (int i = word.size() - 1; i >= 0; i--) {
        cout << word[i] << endl;
    }

    return 0;
}
