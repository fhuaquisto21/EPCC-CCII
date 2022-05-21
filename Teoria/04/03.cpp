#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int getRandomNum() {
    return rand() % 100 + 1;
}

int main() {
    srand((unsigned) time(0));
    int num = getRandomNum();
    int guest;
    printf("I'm thinking of a number between 1 and 100 (inluding both).\n");
    printf("Can you guest what it is?\n");
    printf("Type a number: ");
    cin >> guest;
    printf("You guest is: %i\n", guest);
    printf("The number I was thinking of is: %i\n", num);
    if (num > guest) {
        printf("You were off by: %i\n", num - guest);
    } else if (num < guest) {
        printf("You were off by: %i\n", guest - num);
    } else {
        printf("Congratulation! You win.\n");
    }
    return 0;
}
