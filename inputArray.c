#include<stdio.h>
int main() {

    // float arrFloat[5];
    // int sizeFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);
    // for (int i = 0; i < sizeFloat; i++) {
    //     printf("Enter %dth element : ", i);
    //     scanf("%f", &arrFloat[i]);
    // }
    // for (int i = 0; i < sizeFloat; i++) {
    //     printf("%dth element : %f \n", i, arrFloat[i]);
    // }

    // char ch[5];
    // int sizeChar = sizeof(ch) / sizeof(ch[0]);
    // for (int i = 0; i < sizeChar; i++) {
    //     printf("Enter %dth element : ", i);
    //     scanf("%c", &ch[i]);
    // }

    // printf("hadi %c nayani ", ch[1]);
    
    int num;
    char myChar;
    printf("Enter a number : ");
    scanf("%d", &num);

    fflush(stdin);
    
    printf("Enter a char : ");
    scanf("%c", &myChar);
    printf("1%c%c1 \n", myChar, myChar);


    int n1, n2;
    printf("Enter first number : ");
    scanf("%d", &n1);

    printf("Enter second number : ");
    scanf("%d", &n2);
    

    return 0;
}