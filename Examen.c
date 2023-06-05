#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
} int main() {
    int calificaciones[NUM_ALUMNOS][NUM_PROGRESOS];

    // Generar calificaciones aleatorias para los alumnos
    srand(time(NULL)); // Inicializar la semilla para la generación aleatoria
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        for (int j = 0; j < NUM_PROGRESOS; j++) {
            calificaciones[i][j] = rand() % 11; // Generar una calificación aleatoria entre 0 y 10
        }
    }

    float promediosAlumnos[NUM_ALUMNOS];
    float promediosGrupo[NUM_PROGRESOS];

    // Calcular el promedio de calificaciones de cada alumno
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        promediosAlumnos[i] = calcularPromedio(calificaciones[i], NUM_PROGRESOS);
    }

    // Calcular la nota promedio del grupo para cada progreso
    calcularPromedioGrupo(calificaciones, promediosGrupo);

    // Encontrar el alumno con el mayor promedio de calificación
    int mejorAlumno = encontrarMejorAlumno(promediosAlumnos);

    // Imprimir los resultados
    printf("1- Promedio de calificaciones de cada alumno durante el semestre:\n");
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        printf("Alumno %d: %.2f\n", i + 1, promediosAlumnos[i]);
    }
    printf("\n");

    printf("2- Nota promedio del grupo de estudiantes para cada progreso:\n");
    for (int i = 0; i < NUM_PROGRESOS; i++) {
        printf("Progreso %d: %.2f\n");
        }
    printf("3- La nota mas alta fue:\n");
    printf("%d"), mejorAlumno;
   return 0;     
}