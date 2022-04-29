#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> data = {1,2,3,4,5,6};

    for (int element: data) {
        cout << element << endl;
    }
    
    return 0;
}
