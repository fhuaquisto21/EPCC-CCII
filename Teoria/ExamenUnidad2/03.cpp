#include <iostream>
#include <set>
#include <typeinfo>

int main() {
    std::set<int> numeros{1, 2, 3, 4};
    std::set<int>::iterator it = begin(numeros);
    std::cout << typeid(it).name() << std::endl;
    return 0;
}
