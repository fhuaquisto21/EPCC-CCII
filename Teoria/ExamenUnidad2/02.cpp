#include<iostream>

double add(double a, double b){
    return a + b;
}

double sub(double a, double b){
    return a - b;
}

double mult(double a, double b){
    return a * b;
}

double operation(double(*op)(double, double), double a, double b){
    return op(a,b);
}

int main(){
    double num_1 = 12.5;
    double num_2 = 5.2;

    std::cout << "Suma: " << operation(add, num_1, num_2) << std::endl;
    std::cout << "Resta: " << operation(sub, num_1, num_2) << std::endl;
    std::cout << "Multiplicacion: " << operation(mult, num_1, num_2) << std::endl;
    

    return 0;
}
