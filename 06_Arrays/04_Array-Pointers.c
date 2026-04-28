#include<stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr points to the first element of the array

    printf("Value at ptr: %d\n", *ptr);
    printf("Address of ptr: %u\n", (unsigned int)(void*)ptr);

    printf("Value at second element: %d\n", *(ptr + 1));
    printf("Address of second element: %u\n", (unsigned int)(void*)(ptr + 1));

    return 0;
}