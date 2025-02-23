
#include <stdio.h>
int main() {
    int mat[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) { 
            printf("mat[%d][%d]: %p\n", i, j, (void*)&mat[i][j]);
        }
    }
    printf("\nComparación de direcciones:\n");
    printf("Dirección de mat[0][2]: %p\n", (void*)&mat[0][2]);
    printf("Dirección de mat[1][0]: %p\n", (void*)&mat[1][0]);
    return 0;
}

