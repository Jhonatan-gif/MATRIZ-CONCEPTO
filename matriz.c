#include <stdio.h>

int main() {
    int n, m;

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%i", &n);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%i", &m);

    int matrix[n][m];

    // Inicializar la matriz con ceros e imprimir la matriz original
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = 0; // Asignar ceros a toda la matriz
        }
        printf("\n");
    }

    // Asignar unos a la diagonal principal
    int smaller_dimension = (n < m) ? n : m; 
    printf("Matriz con unos en la diagonal principal:\n");
    for (int i = 0; i < smaller_dimension; i++) {
        matrix[i][i] = 1; 
    }

    // Imprimir la matriz con unos en la diagonal principal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}