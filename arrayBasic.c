#include <stdio.h>
int main()
{
    int arr[50];
    // printf("arr[0] = %d \n", arr[0]); // * garbedge value 
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    // printf("arr[1] = %d \n", arr[1]);
    // printf("arr[0] = %d \n", arr[0]);
    // printf("arr[2] = %d \n", arr[2]);
    // printf("arr[3] = %d \n", arr[3]);
    // printf("arr[4] = %d \n", arr[4]);
     
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // printf("size = %d \n", size);
    
    for (int i = 0; i <= size; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    for (int i = 0; i <= size; i++) {
        printf("Enter %dth element : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= size; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}