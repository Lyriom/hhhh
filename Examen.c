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
// Función para obtener la nota promedio del grupo para cada progreso
void calcularPromedioGrupo(int calificaciones[][NUM_PROGRESOS], float promediosGrupo[]) {
    for (int i = 0; i < NUM_PROGRESOS; i++) {
        int suma = 0;
        for (int j = 0; j < NUM_ALUMNOS; j++) {
            suma += calificaciones[j][i];
        }
        promediosGrupo[i] = (float)suma / NUM_ALUMNOS;
    }
}

// Función para encontrar el alumno con el mayor promedio de calificación
int encontrarMejorAlumno(float promediosAlumnos[]) {
    int mejorAlumno = 0;
    float mayorPromedio = promediosAlumnos[0];
    for (int i = 1; i < NUM_ALUMNOS; i++) {
        if (promediosAlumnos[i] > mayorPromedio) {
            mayorPromedio = promediosAlumnos[i];
            mejorAlumno = i;
        }
    }
    return mejorAlumno;
}
