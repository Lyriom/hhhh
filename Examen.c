#include <stdio.h>

#define NUM_ALUMNOS 23
#define NUM_PROGRESOS 3

// Función para calcular el promedio de un arreglo de calificaciones
float calcularPromedio(int calificaciones[], int numCalificaciones) {
    int suma = 0;
    for (int i = 0; i < numCalificaciones; i++) {
        suma += calificaciones[i];
    }
    float promedio = (float)suma / numCalificaciones;
    return promedio;
}