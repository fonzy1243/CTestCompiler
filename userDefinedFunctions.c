#include <stdio.h>
float computeAverage(float grade1, float grade2)
{
    float average = (grade1 + grade2) / 2;

    return average;
}

void displayAverage(float average)
{
    printf("Hands-on Exams: %.2f\n", average);
}
int main()
{
    float handsOn1,
        handsOn2,
        average;

    printf("Enter grade HO1: ");
    scanf("%f", &handsOn1);
    printf("Enter grade HO2: ");
    scanf("%f", &handsOn2);

    average = computeAverage(handsOn1, handsOn2);
    displayAverage(average);

    printf("Enter grade HO1: ");
    scanf("%f", &handsOn1);
    printf("Enter grade HO2: ");
    scanf("%f", &handsOn2);

    average = computeAverage(handsOn1, handsOn2);
    displayAverage(average);

    return 0;
}
