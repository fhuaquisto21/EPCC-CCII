#include <iostream>

using namespace std;

void countUp(int n, int end) {
    if (n == end + 1) {
        printf("END\n");
    } else {
        printf("%i\n", n);
        countUp(n + 1, end);
    }
}

int main() {
    int num;
    printf("NUM: ");
    cin >> num;
    countUp(1, num);
    return 0;
}
