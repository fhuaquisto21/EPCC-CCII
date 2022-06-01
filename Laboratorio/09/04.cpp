#include <iostream>
#include <vector>

using namespace std;

// minNumber devuelve el menor número en un vector;
template <class number>
number minNumber(vector<number> nums) {
    number min = nums[0];
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}

// maxNumber devuelve el mayor número en un vector;
template <class number>
number maxNumber(vector<number> nums) {
    number max = nums[0];
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}


int main() {
    vector<float> arr = { 4, 5, 8, 3, 9 };
    cout << "Mínimo: " << minNumber(arr) << endl;
    cout << "Máximo: " << maxNumber(arr) << endl;
    return 0;
}
