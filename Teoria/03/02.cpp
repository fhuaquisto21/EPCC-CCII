#include <iostream>

using namespace std;

int main() {
    int n;
    printf("Valor de N: ");
    cin >> n;
    for (int i = 0; i <= n + 1; i++) {
        for (int y = 0; y <= n; y++) {
            if (i == 0) {
                if (y == 0) {
                    printf("  *  |  ");
                } else {
                    if (y == n) {
                        if (y > 9) {
                            printf("%i |\n", y);
                        } else {
                            printf("%i  |\n", y);
                        }
                    }
                    else {
                        printf("%i  |  ", y);
                    }
                }
                
            }
            if (i == 1) {
                if (y == 0) {
                    printf("-----+--");
                } else {
                    if (y == n) {
                        printf("---+\n");
                    } else {
                        if (y > 9) {
                            printf("-");
                        }
                        printf("---+--");
                    }
                }
            }
            if (i > 1) {
                if (y == 0) {
                    if (i - 1 > 9) {
                        printf("  %i |  ", i - 1);
                    } else {
                        printf("  %i  |  ", i - 1);
                    }
                } else {
                    int mult = (i - 1) * y;
                    if (y == n) {
                        if (mult > 99) {
                            printf("%i|\n", mult);
                        } else if (mult > 9) {
                            printf("%i |\n", mult);
                        } else {
                            printf("%i  |\n", mult);
                        }
                    } else {
                        if (mult > 99) {
                            printf("%i|  ", mult);
                        } else if (mult > 9) {
                            printf("%i |  ", mult);
                        } else {
                            printf("%i  |  ", mult);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
