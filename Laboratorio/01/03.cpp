#include <iostream>
#include <string>

using namespace std;

int main() {
    string dateCurrent, sHours, sMinutes, ext;
    int sumMinutes, iHours, iMinutes;
    printf("Ingrese la hora actual (HH:MM): ");
    cin >> dateCurrent;

    printf("Cantidad de minutos a agregar: ");
    cin >> sumMinutes;

    // Split date

    int end = dateCurrent.find(":");
    iHours = stoi(dateCurrent.substr(0, end));
    iMinutes = stoi(dateCurrent.substr(end + 1, 4));

    iMinutes += sumMinutes;
    if (iMinutes >= 60) {
        iMinutes -= 60;
        if (iHours == 23) {
            iHours = 0;
        } else {
            iHours++;
        }
    }

    if (iHours > 12) {
        ext = "PM";
        iHours -= 12;
    } else {
        
        ext = "AM";
    }
    if (iHours < 10) {
        sHours = "0" + to_string(iHours);
    } else {
        sHours = to_string(iHours);
    }

    printf("La nueva hora sería: %s:%s %s\n", sHours.c_str(), to_string(iMinutes).c_str(), ext.c_str());

    return 0;
}
