class Array {
    private:
        int vec[5];
        int length;
    public:
        Array();
        Array(int);
        ~Array();
        bool verificarEspacios();
        int agregarDato(int);
        int eliminarData(int);
        void mostrarArray();
};
