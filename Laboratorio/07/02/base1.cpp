#include <iostream>
#include <vector>
#include "base1.h"

using namespace std;

Color::Color() {}

void Color::agregarColor(int _r, int _g, int _b) {
    this->rgb.push_back(_r);
    this->rgb.push_back(_g);
    this->rgb.push_back(_b);
}
