#include <iostream>
#include <vector>

using namespace std;

bool searchNum(vector<int> nums, int x) {
    int limit = (sizeof(nums)/sizeof(nums[0]));
    for (int i = 0; i < limit; ++i) {
        if (nums[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums;
    int x;

    for (int i = 0; i < 8; ++i) {
        int aux;
        printf("[%i] Valor: ", i + 1);
        cin >> aux;
        nums.push_back(aux);
    }

    printf("\nNúmero a buscar: ");
    cin >> x;

    bool eval = searchNum(nums, x);
    if (eval) {
        printf("\nEl valor \"%i\" SÍ existe en el array.\n", x);
    } else {
        printf("\nEl valor \"%i\" NO existe en el array.\n", x);
    }
    return 0;
}
