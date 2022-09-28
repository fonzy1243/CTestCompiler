#include <stdio.h>

int main()
{
    int nOne, nTwo, nThree;

    printf("Number: ");
    scanf("%d", &nOne);

    printf("Next number: ");
    scanf("%d", &nTwo);

    nThree = nTwo % 10;
    nTwo /= 10;
    nTwo = nOne * nTwo * 10;
    nThree *= nOne;

    printf("New number: %d\n", nTwo);
    return 0;
}