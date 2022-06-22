/**
 * 1. Defina una lista enlazada que permita insertar elementos al final de todos los
 * elementos que ya se hayan ingresado. Por el momento no es necesario preservar un
 * orden, simplemente los elementos nuevos deben de ingresar como el último elemento.
 * */

#include "node.cpp"
class List {
    private:
        Node* head;
        int length;
        void orderAscending(int*, int);
        void orderDescending(int*, int);
    public:
        List();
        List(int);
        ~List();
        Node* addLastNode(int);

        /**
         * 2. Con la implementación de la lista enlazada anterior, desarrolle una función que
         * permita ingresar los elementos al inicio de todos los demás elementos. Tendrá que
         * modificar el comportamiento del puntero que tiene referencia al primer elemento para
         * que sea redireccionado al nuevo elemento por ingresar.
         * */
        Node* addFirstNode(int);
        
        /**
         * 3. Desarrolle una función que permita ingresar elementos en el medio de dos elementos
         * de la lista enlazada, como se muestra en la siguiente imagen. Solicite que se ingrese
         * una posición válida dentro de la lista y permita que el valor ingresado se pueda anexar
         * en esa posición.
         * */
        Node* addIndexNode(int, int);

        /**
         * 4. Elabore una función que permita eliminar el último elemento de una lista enlazada.
         * (Evite copiar los elementos en una nueva lista para completar la eliminación del
         * elemento)
         * */
        void deleteLastNode();

        /**
         * 5. Desarrolle una función que permita eliminar el primer elemento de una lista sin perder
         * referencia de los demás elementos que ya se encuentran almacenados en la estructura.
         * (Evite copiar los elementos en una nueva lista para completar la eliminación de los
         * elementos)
         * */
        void deleteFirstNode();

        /**
         * 6. Dado una posición válida dentro de la lista, permita al usuario eliminar un elemento
         * de cualquier posición sin perder referencia de los demás elementos.
         * */
        void deleteIndexNode(int);

        /**
         * 7. Desarrolle un algoritmo de ordenamiento que permita ordenar los elementos de forma
         * ascendente y descendente de acuerdo a la elección del usuario. Se debe poder simular
         * el ingreso de 10 mil elementos de forma aleatoria y ordenarlos en el menor tiempo
         * posible ( < 2 seg).
         * */
        void ascendingOrder();
        void descendingOrder();
        void printList();
};
