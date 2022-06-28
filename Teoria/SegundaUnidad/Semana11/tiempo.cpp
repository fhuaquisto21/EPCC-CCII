#include <iostream>

class Tiempo {
    private:
        int segundos;
        int minutos;
        int horas;
    public:
    void reduce() {
        int a,b,c,d;
        a = this->segundos / 60;
        b = a * 60;
        c = this->minutos / 60;
        d = c * 60;

        this->segundos -= b;
        this->minutos += a - d;
        this->horas += c;
    }

    Tiempo() {
        this->minutos = 0;
        this->segundos = 0;
        this->horas = 0;
    }

    Tiempo(const Tiempo& other) {
        this->minutos = other.minutos;
        this->segundos = other.segundos;
        this->horas = other.horas;
    }

    Tiempo(int _horas, int _minutos, int _segundos) {
        this->segundos = _segundos;
        this->minutos = _minutos;
        this->horas = _horas;
        reduce();
    }
     
    void escribe(std::ostream& o) const {
        if ( horas > 12){
            o << horas << '/' << minutos << '/' << segundos << " PM";
        } else {
            o << horas << '/' << minutos << '/' << segundos << " AM";
        }
    }

    void lee(std::istream& i) {
        char c;
        i >> horas >> c >> minutos >> c >> segundos ;
        reduce();
    }

    void operator +=(const Tiempo& other) {
        int a = this->minutos, b = this->segundos, c = this->horas;
        int d = other.minutos, e = other.segundos, f= other.horas;
        this->minutos = a + d;
        this->segundos = b + e;
        this->horas = c + f;
        reduce();
    }


    void operator -=(const Tiempo& other) {
        int a = this->minutos, b = this->segundos, c = this->horas;
        int d = other.minutos, e = other.segundos, f = other.horas;
        this->minutos = a + d;
        this->segundos = b + e;
        this->horas = c + f;
        reduce();
    }

    Tiempo operator +(const Tiempo& other) const {
        Tiempo resultado(this->horas, this->minutos, this->segundos);
        resultado += other;
        return resultado;
    }

    Tiempo operator -(const Tiempo& other) const {
        Tiempo resultado(this->horas, this->minutos, this->segundos);
        resultado -= other;
        return resultado;
    }

    bool operator ==(const Tiempo& other) {
        int a = this->minutos, b = this->segundos, c = this->horas;
        int d = other.minutos, e = other.segundos, f = other.horas;
        if (a == d && b == e && c == f){
            return true;
        }
        return false;
    }

    bool operator !=(const Tiempo& other) {
        int a = this->minutos, b = this->segundos, c = this->horas;
        int d = other.minutos, e = other.segundos, f = other.horas;
        if(a != d || b != e || c != f){
            return true;
        }
        return false;
    }

    bool operator <(const Tiempo& other) {
        int a = this->horas, b = this->minutos, c = this->segundos; 
        int d = other.horas, e = other.minutos, f = other.segundos;
        if (a < d) {
            return true;
        } else if (a == d && b < e) {
            return true;
        } else if (a == d && b == e && c < f) {
            return true;
        }
        return false;
    }

    bool operator >(const Tiempo& other) {
        int a = this->horas, b = this->minutos, c = this->segundos; 
        int d = other.horas, e = other.minutos, f = other.segundos;
        if (a > d) {
            return true;
        } else if (a == d && b > e) {
            return true;
        } else if (a == d && b == e && c > f) {
            return true;
        }
        return false;
    }

    bool operator <=(const Tiempo& other) {
        int a = this->horas, b = this->minutos, c = this->segundos; 
        int d = other.horas, e = other.minutos, f = other.segundos;
        if (a <= d) {
            return true;
        } else if (a == d && b <= e) {
            return true;
        } else if (a == d && b == e && c <= f) {
            return true;
        }
        return false;
    }

    bool operator >=(const Tiempo& other) {
        int a = this->horas, b = this->minutos, c = this->segundos; 
        int d = other.horas, e = other.minutos, f = other.segundos;
        if (a >= d) {
            return true;
        } else if (a == d && b >= e) {
            return true;
        } else if (a == d && b == e && c >= f) {
            return true;
        }
        return false;
    }
};


std::ostream& operator << (std::ostream& o, const Tiempo& R) {
    R.escribe(o);
    return o;
}

std::istream& operator >> (std::istream& i, Tiempo& R) {
    R.lee(i);
    return i;
}

int main(){
    Tiempo A;
    Tiempo B(3, 45, 20);
    Tiempo D(9, 45, 20);

    std::cout << B << std::endl;
    std::cout << D << std::endl;

    A = B + D;
    A.reduce();

    std::cout << A << std::endl;

    std::cout << (B > D) << std::endl;
    std::cout << (B >= D) << std::endl;
    std::cout << (B < D) << std::endl;
    std::cout << (B <= D) << std::endl;
    std::cout << (B == D) << std::endl;
    std::cout << (B != D) << std::endl;
}
