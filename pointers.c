#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("During swap:\n");
    printf("num1 is %d\n", *num1);
    printf("num2 is %d\n", *num2);
}

int main()
{
    int num1, num2;
    num1 = 10, num2 = 20;

    // before swap
    printf("Before swap:\n");
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);

    // during swap
    swap(&num1, &num2);

    // after swap
    printf("After swap:\n");
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);

    return 0;
}