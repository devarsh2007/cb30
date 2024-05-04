#include<stdio.h>
int main() {

    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    arr[0] = 3;
    for (int i = 0; i < size; i++) {
        printf("%d \n", arr[i]);
    }
    return 0;
}