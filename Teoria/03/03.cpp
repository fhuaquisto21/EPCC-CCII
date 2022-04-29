#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    printf("Valor de N: ");
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        printf("[%i] Ingrese un valor: ", i + 1);
        cin >> num;
        nums.push_back(num);
    }

    printf("\nOriginal:\n");
    for (int num: nums) {
        printf("%i - ", num);
    }
    printf("|\n");


    for (int i = 0; i < nums.size() - 1; i++) {
        for (int y = 0; y < nums.size() - 1; y++) {
            if (nums[y] > nums[y + 1]) {
                int aux = nums[y];
                nums[y] = nums[y + 1];
                nums[y + 1] = aux;
            }
        }
    }

    printf("\nOrdenado:\n");
    for (int num: nums) {
        printf("%i - ", num);
    }
    printf("|\n");
    return 0;
}
