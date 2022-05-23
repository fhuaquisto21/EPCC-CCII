class Rectangulo {
    private:
        int altura;
        int base;
    public:
        Rectangulo();
        Rectangulo(int, int);
        ~Rectangulo();
        int getAltura();
        int setAltura(int);
        int getBase();
        int setBase(int);
        int getPerimetro();
};
