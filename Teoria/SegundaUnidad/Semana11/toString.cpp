#include <iostream>
#include <sstream>
#include <string>

template <typename T>
std::string toString(T const& value) {
    std::string str;
    std::stringstream aux;    
    aux << value;
    aux >> str;
    return str;
}

int main() {
    int a = 12;
    std::string s = toString(a);
    std::cout << s << std::endl;
    return 0;
}
