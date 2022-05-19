#include <iostream>
#include <string>

using namespace std;

class Color {
    private:
        int r, g, b;
    public:
        Color(int _r, int _g, int _b) {
            this->r = _r;
            this->g = _g;
            this->b = _b;
        }
        void setR(int _r) {
            this->r = _r;
        }
        void setG(int _g) {
            this->g = _g;
        }
        void setB(int _b) {
            this->b = _b;
        }
        int getR() {
            return this->r;
        }
        int getG() {
            return this->g;
        }
        int getB() {
            return this->b;
        }
};

class Material {
    private:
        string type;
    public:
        Material(string _type) {
            this->type = _type;
        }
        void setType(string _type) {
            this->type = _type;
        }
        string getType() {
            return this->type;
        }
};

class Object: public Color, public Material {
    private:
        string object;
    public:
        Object(int _r, int _g, int _b, string _type, string _object):
            Color(_r, _g, _b),
            Material(_type) {
                this->object = _object;
            }

        void printObject() {
            printf("El objeto %s es del material %s y tiene como código de color rgb(%i, %i, %i).\n", this->object.c_str(), this->getType().c_str(), this->getR(), this->getG(), this->getB());
        }
};

int main() {
    int r, g, b;
    string type, object;
    printf("Objecto: ");
    cin >> object;
    printf("Material: ");
    cin >> type;
    printf("Color:\n\tRed:");
    cin >> r;
    printf("\tGreen: ");
    cin >> g;
    printf("\tBlue: ");
    cin >> b;
    Object *obj = new Object(r, g, b, type, object);
    obj->printObject();
    return 0;
}
