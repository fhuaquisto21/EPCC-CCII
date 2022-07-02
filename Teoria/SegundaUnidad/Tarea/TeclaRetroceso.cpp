#include <iostream>
#include <deque>

int main()
{
    std::deque<char> *base = new std::deque<char>;
    char *word = new char[50];
    std::cout << "Palabra a introducir: ";
    std::cin >> word;

    for (char* it = word; *it; ++it) {
        if (*it == '#') {
            if (base->empty())
                continue;
            base->pop_back();
        } else {
            base->push_back(*it);
        }
    }

    for (int i = 0; i < base->size(); i++) {
        std::cout << base->at(i);
    }

    std::cout << std::endl;

    return 0;
}