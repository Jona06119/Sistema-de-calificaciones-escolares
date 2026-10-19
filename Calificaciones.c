#include <stdio.h>

int main() {
    char nombre[50];
    float calificacion1, calificacion2, calificacion3;
    float promedio;

    printf("=== SISTEMA DE CALIFICACIONES ESCOLARES ===\n\n");

    printf("Ingresa el nombre del estudiante: ");
    scanf(" %49[^\n]", nombre);

    printf("Ingresa la primera calificacion: ");
    scanf("%f", &calificacion1);

    printf("Ingresa la segunda calificacion: ");
    scanf("%f", &calificacion2);

    printf("Ingresa la tercera calificacion: ");
    scanf("%f", &calificacion3);

    if (calificacion1 < 0 || calificacion1 > 10 ||
        calificacion2 < 0 || calificacion2 > 10 ||
        calificacion3 < 0 || calificacion3 > 10) {

        printf("\nError: las calificaciones deben estar entre 0 y 10.\n");
        return 1;
    }

    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

    printf("\n========== RESULTADOS ==========\n");
    printf("Estudiante: %s\n", nombre);
    printf("Primera calificacion: %.2f\n", calificacion1);
    printf("Segunda calificacion: %.2f\n", calificacion2);
    printf("Tercera calificacion: %.2f\n", calificacion3);
    printf("Promedio final: %.2f\n", promedio);

    if (promedio >= 6.0) {
        printf("Estado: APROBADO\n");
    } else {
        printf("Estado: REPROBADO\n");
    }

    printf("================================\n");

    return 0;
}