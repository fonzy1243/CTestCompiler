#include <stdio.h>

int main()
{
    // Code below is the original program.

    // float fHeight; fWidth;
    // int nPerimeter;

    // printf("Enter height: ");
    // scanf("%d", fHeight);

    // printf("Enter width: ");
    // scanf("%f", &fWidth);

    // nPerimeter=2fHeight+2fWidth;

    // printf("Perminiter = ", nPerimeter);

    // return 0;

    float fHeight, fWidth;
    int nPerimeter;

    printf("Enter height: ");
    scanf("%f", &fHeight);

    printf("Enter width: ");
    scanf("%f", &fWidth);

    nPerimeter = 2 * fHeight + 2 * fWidth;

    printf("Perimiter = %d", nPerimeter);

    return 0;
}