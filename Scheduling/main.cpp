
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include "Queue.cpp"

int main()
{
    // Semilla para numeros aleatorios
    srand((unsigned) time(NULL));

    // Creamos una pila
    Queue cola;

    // Generamos numeros aleatorios con rango 1 - 20
    int n = rand() % 10 + 1;
    printf("%i datos: \n\n", n);

    // Insertamos los datos a la pila
    int id = 0;
    for(int i = 0; i < n; i++){
        int time = rand() % 100 + 1;
        int priority = rand() % 100 + 1;
        printf("id: %i time: %i priority: %i\n", id, time, priority);
        cola.enqueue(id++, time, priority);
    }

    printf("\n\nVaciando la cola \n\n");

    // Mostramos y vaciamos la pila
    while(!cola.empty())
    {
        // Mostramos el tamaño de la cola y el valor obtenido
        cola.print_all();
        int *process = cola.dequeue();
        printf("Termino el proceso: id: %i time: %i priority: %i\n\n", process[0], process[1], process[2]);
    }

    return 0;
}
