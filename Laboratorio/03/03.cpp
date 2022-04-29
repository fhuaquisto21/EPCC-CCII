/* Fabricio Huaquisto QUispe
 * 20210678 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> calculatYearsOld(vector<int> current, vector<int> birtday) {
    vector<int> yearsOld = { current[0] - birtday[0], current[1] - birtday[1], current[2] - birtday[2] };

    return yearsOld;
}

int main() {
    vector<int> dateCurrent = { 0, 0, 0 };
    vector<int> dateBirtday = { 0, 0, 0 };

    printf("Año actual: ");
    cin >> dateCurrent[0];
    printf("Mes actual: ");
    cin >> dateCurrent[1];
    printf("Día actual: ");
    cin >> dateCurrent[2];

    printf("\nAño de cumpleaños: ");
    cin >> dateBirtday[0];
    printf("Mes de cumpleaños: ");
    cin >> dateBirtday[1];
    printf("Día de cumpleaños: ");
    cin >> dateBirtday[2];

    vector<int> yearsOld = calculatYearsOld(dateCurrent, dateBirtday);
    printf("Usted tiene: %i años, %i meses y %i días.\n", yearsOld[0], yearsOld[1], yearsOld[2]);
    return 0;
}
