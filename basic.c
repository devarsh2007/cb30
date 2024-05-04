#include<stdio.h>
int main() {

    int arr[3][5] = {{1, 2, 3, 4, 5}, { 1, 2, 3, 4, 5}, { 1, 2, 3, 4, 5}};
    // int arr[][5] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2};
    printf("size = %d \n", sizeof(arr));
    
    int numOfRow = sizeof(arr) / (sizeof(arr[0][0]) * 5);
    printf("numOfRow = %d \n", numOfRow);
    int numOfCol = sizeof(arr) / (sizeof(arr[0][0]) * 3);
    printf("numOfCol = %d \n", numOfCol);

    // printf("%d ", arr[0][0]);
    // printf("%d ", arr[0][1]);
    // printf("%d ", arr[0][2]);
    // printf("%d ", arr[0][3]);
    // printf("%d ", arr[0][4]);
    // printf("\n");
    // printf("%d ", arr[1][0]);
    // printf("%d ", arr[1][1]);
    // printf("%d ", arr[1][2]);
    // printf("%d ", arr[1][3]);
    // printf("%d ", arr[1][4]);
    // printf("\n");
    // printf("%d ", arr[2][0]);
    // printf("%d ", arr[2][1]);
    // printf("%d ", arr[2][2]);
    // printf("%d ", arr[2][3]);
    // printf("%d ", arr[2][4]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);   
        }
        printf("\n");
    }


    return 0;
}