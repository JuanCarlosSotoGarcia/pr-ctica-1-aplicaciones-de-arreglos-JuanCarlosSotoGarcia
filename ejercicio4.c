#include <stdio.h>

int main() {
    int mat[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    printf("Dirección de mat: %p\n", (void*)mat);
    printf("Dirección de mat[0]: %p\n", (void*)mat[0]);
    printf("Dirección de &mat[0][0]: %p\n", (void*)&mat[0][0]);
    return 0;
}


