#include <stdio.h>
int main()
{

    int arr[3][5] = {{1, 2, 3, 4, 6}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int key = 6;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (key == arr[i][j]) {
                printf("Key does exist at %d, %d", i, j);
                break;
            }
        }
    }
    return 0;
}