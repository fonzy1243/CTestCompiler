#include <stdio.h>

// get number 1-7 and display the corresponding day of the week

int main()
{
    int day;

    printf("Enter num day: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        printf("No classes\n");
        day++;
        break;
    case 5:
        printf("Thursday\n");
        printf("F2f classes\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Number out of range!\n");
        day = 1;
    }

    printf("Value of day: %d", day);
}