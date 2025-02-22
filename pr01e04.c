#include <stdio.h>

int main() {
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("Direccion de mat: %p\n", mat);
    printf("Direccion de mat[0]: %p\n", mat[0]);
    printf("Direccion de &mat[0][0]: %p\n", &mat[0][0]);

    return 0;
}
