#include <stdio.h>
int computeAverage(int x, int y)
{
    printf("Average of %d and %d is: %d", x, y, (x + y) / 2);
    return 0;
}

int main()
{
    computeAverage(3,5);
    return 0;
}

