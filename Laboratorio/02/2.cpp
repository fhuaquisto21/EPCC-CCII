/* Fabricio Huaquisto Quispe
 * 20210678 */

#include <iostream>

using namespace std;

int main() {
    int primo = 1;
    for (int i = 0; i < 50; i++) {
        while (true) {
            int count = 0;
            for (int x = 1; x <= primo; x++) {
                if (primo % x == 0) {
                    count++;
                } 
            }
            if (count == 2) {
                cout << primo << endl;
                primo++;
                break;
            }
            primo++;
        }
    }
    return 0;
}
