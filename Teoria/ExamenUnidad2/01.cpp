#include <iostream>

void duplicar(int (&m)[3][3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                m[i][j][k] *= 2;
            }
        }
    }
}

void duplicarA(int ***&m) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                m[i][j][k] *= 2;
            }
        }
    }
}

int main() {
    int x[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}},
        {{21, 22, 23}, {24, 25, 26}, {27, 28, 29}}
    };

    int ***a = new int**[3];
    int asd = 1;
    for (int i = 0; i < 3; ++i) {
        a[i] = new int*[3];
        for (int y = 0; y < 3; ++y) {
            a[i][y] = new int[3];
            for (int l = 0; l < 3; ++l) {
                a[i][y][l] = asd;
                asd++;
                if (asd == 10 || asd == 20) {
                    asd += 1;
                }
            }
        }
    }

    duplicarA(a);
    duplicar(x);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                std::cout << a[i][j][k] << std::endl;
            }
        }
    }
    return 0;
}
