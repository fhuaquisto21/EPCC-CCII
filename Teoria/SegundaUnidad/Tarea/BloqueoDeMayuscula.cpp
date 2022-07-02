#include <iostream>
#include <queue>

int main()
{
    std::queue<char> *base = new std::queue<char>;
    bool bloq = false;
    char *word = new char[50];
    std::cout << "Palabra a introducir: ";
    std::cin >> word;

    for (char* it = word; *it; ++it) {
        if (*it == '@') {
            bloq = !bloq;
            int a = 0;
            for (int i = 0; i < base->size(); ++i) {
                std::cout << ++a << std::endl;
                char aux = base->front();
                base->pop();
                if (aux <= 'z' && aux >= 'a') {
                    aux += 32;
                } else {
                    aux -= 32;
                }
                base->push(aux);
            }
        } else if (*it == '$') {
            while (!base->empty()) {
                char aux = base->front();
                base->pop();
                std::cout << aux;
            }
        } else {
            base->push(*it);
        }
    }

    return 0;
}