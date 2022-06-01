#include <iostream>
#include <string>

using namespace std;

template <class str>
void newEmail(str init) {
    cout << init << "@unsa.edu.pe" << endl;
}

int main() {
    string word;
    for (int i = 5; i; --i) {
        printf("Usuario: ");
        cin >> word;
        newEmail(word);
        cout << endl;
    }

    return 0;
}
