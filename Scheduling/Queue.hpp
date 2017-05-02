/*
Fecha; 28/03/2017
Nota: Implementacion de colas con estructuras dinamicas
*/

#ifndef QUEUE_HPP_INCLUDED
#define QUEUE_HPP_INCLUDED

class Queue
{
    // Clase para crear un objeto nodo de la lista
    class Node
    {
        // Contenido de un nodo
        int _id; // id del nodo
        int _time; // tiempo del nodo
        int _priority; // prioridad del nodo
        Node *_next; // Apuntador al siguiente nodo

        public:
            // Constructor
            Node(int, int , int); // El apuntador siguiente siempre apunta a NULL

            // Pedimos la informacion del objeto
            // Se utiliza const por que no podemos modificar el objeto
            int id() const; // Nos devuelve el id almacena
            int time() const; // Nos devuelve el tiempo almacena
            int priority() const; // Nos devuelve el prioridad almacena
            Node *next() const; // Nos devuelve el siguiente nodo (si no existe retorna NULL)

            // Metodo que permite modificar el apuntador
            // Asigno y me retorna el nuevo nodo
            Node *next(Node *);
    };

    Node *start; // Nodo inicial
    Node *eoq; // Apuntador
    int _s; // Tamaño de la pila

    public:
        // Constructor
        Queue();
        // Destructor
        ~Queue();

        // Funciones de utileria
        int size() const { return _s; } // Obtenemos tamaño
        bool empty() { return _s == 0; } // Vacuidad

        // Metodos para colas
        void enqueue(int, int , int); // Ingresa nodo al final de la lista
        int* dequeue(); // Obtiene el dato del frente de la lista y elimina el nodo
        int front(); // Obtiene el dato del frente de la lista
        void print_all(); // imprime toda la lista
};

#endif // QUEUE_HPP_INCLUDED

