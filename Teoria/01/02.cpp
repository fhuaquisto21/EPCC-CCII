#include <iostream>
#include <string>

using namespace std;

int main() {
    int sum = 0;

    for (int i = 10; i <= 20; i++) {
        sum += i;
    }

    printf("Sum of 10 of 20 = %i\n", sum);
    return 0;
}
