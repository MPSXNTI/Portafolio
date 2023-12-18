// Manuel Ponce 21.727.343-9 S1
#include <stdio.h>

struct AlienRace {
    char nombre[20];
    int cantidadOjos;
    int cantidadBrazos;
    int cantidadPiernas;
    int cantidadManos;
    int cantidadColas;
};

int validarCantidad(int cantidad) {
    while (cantidad < 0 || cantidad > 10) {
        printf("Ingresa una cantidad válida (entre 0 y 10): ");
        scanf("%d", &cantidad);
    }
    return cantidad;
}

int main() {
    struct AlienRace razas[3];

    for (int i = 0; i < 3; ++i) {
        printf("\nCreación de raza alienígena %d\n", i + 1);

        printf("Nombre de la raza: ");
        scanf("%s", razas[i].nombre);

        printf("Cantidad de ojos: ");
        razas[i].cantidadOjos = validarCantidad(razas[i].cantidadOjos);

        printf("Cantidad de brazos: ");
        razas[i].cantidadBrazos = validarCantidad(razas[i].cantidadBrazos);

        printf("Cantidad de piernas: ");
        razas[i].cantidadPiernas = validarCantidad(razas[i].cantidadPiernas);

        printf("Cantidad de manos: ");
        razas[i].cantidadManos = validarCantidad(razas[i].cantidadManos);

        printf("Cantidad de colas: ");
        razas[i].cantidadColas = validarCantidad(razas[i].cantidadColas);
    }

    for (int i = 0; i < 3; ++i) {
        char nombreArchivo[10];
        sprintf(nombreArchivo, "Raza%d.txt", i + 1);

        FILE *archivo = fopen(nombreArchivo, "w");
        fprintf(archivo, "Cantidad de ojos: %d\n", razas[i].cantidadOjos);
        fprintf(archivo, "Cantidad de brazos: %d\n", razas[i].cantidadBrazos);
        fprintf(archivo, "Cantidad de piernas: %d\n", razas[i].cantidadPiernas);
        fprintf(archivo, "Cantidad de manos: %d\n", razas[i].cantidadManos);
        fprintf(archivo, "Cantidad de colas: %d\n", razas[i].cantidadColas);

        fclose(archivo);
    }

    printf("Información guardada en archivos.\n");

    return 0;
}
