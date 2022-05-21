#include <iostream>

using namespace std;

int main() {
    int isec, hour, min;
    printf("Segundos: ");
    cin >> isec;
    hour = isec / 3600;
    isec -= hour * 3600;
    min = isec / 60;
    isec -= min * 60;
    printf("%i hours, %i minutes, and %i seconds.\n", hour, min, isec);
    return 0;
}
