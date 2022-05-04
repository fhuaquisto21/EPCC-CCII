#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;

    for (int i = 1; i <= 100; ++i) {
        int count = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                ++count;
            }
        }
        if (count == 2) {
            nums.push_back(i);
        }
    }

    for (int i = nums.size() - 1; i > -1; --i) {
        printf("%i\n", nums[i]);

    }
    return 0;
}
