#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    int x;
    while (cin >> x) {
        sum += x;
        count++;
    }
    if (count != 0)
        cout << "average = " << sum / count << endl;
    return 0;
}
