#include <iostream>

using namespace std;

template <class number>
void ascendSort(number * nums, int length) {
    for (int i = 0; i < length; ++i) {
        for (int y = 0; y < length - 1; ++y) {
            if (nums[y] > nums[y + 1]) {
                number aux = nums[y];
                nums[y] = nums[y + 1];
                nums[y + 1] = aux;
            }
        }
    }
}

template <class number>
void descendSort(number * nums, int length) {
    for (int i = length - 1; i >= 0; --i) {
        for (int y = length - 1; y > 0; --y) {
            if (nums[y] > nums[y - 1]) {
                number aux = nums[y];
                nums[y] = nums[y - 1];
                nums[y - 1] = aux;
            }
        }
    }
}

int main() {
    int *arr = new int;
    arr[0] = 5;
    arr[1] = 3;
    arr[2] = 1;
    arr[3] = 2;
    arr[4] = 4;

    cout << "ORIGINAL:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << endl;
    }

    ascendSort(arr, 5);
    cout << endl;
    cout << "ORDENADO ASCENDENTEMENTE:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << endl;
    }
    descendSort(arr, 5);
    cout << endl;
    cout << "ORDENADO DESCENDENTEMENTE:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << endl;
    }
    return 0;
}
