
#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30};

    printf("Dirección de arr: %p\n", (void*)arr);
    printf("Dirección de &arr[0]: %p\n", (void*)&arr[0]);
    printf("Dirección de &arr: %p\n", (void*)&arr);
    return 0;
}
