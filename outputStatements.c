#include <stdio.h>

int main()
{
    printf("This is a string literal\n");
    printf("integer = %d\n", 5); /* Note:replacing this with %f gives a
                                    compile-time WARNING */
    printf("float = %f\n", 3.75);
    printf("character = %c\n", 'X');
    printf("string = %s\n", "Hello World");
    printf("combination = %d %f %c\n", 5, 3.75, 'X');

    return 0;
}