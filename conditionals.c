#include <stdio.h>

float getGrade();

int main()
{
    float grade;
    float fourPointGrade;

    // input from user
    grade = getGrade();

    // print if you passed or fail
    if (grade >= 60)
    {
        fourPointGrade = 1.0;
        printf("Grade: %.1f\n", fourPointGrade);
        printf("You passed!");

        if (grade >= 66)
        {
            fourPointGrade = 1.5;
            printf("Grade: %.1f\n", fourPointGrade);
            printf("You passed!");
        }
        else if (grade >= 72)
        {
            fourPointGrade = 2.0;
            printf("Grade: %.1f\n", fourPointGrade);
            printf("You passed!");
        }
        else if (grade >= 78)
        {
            fourPointGrade = 2.5;
            printf("Grade: %.1f\n", fourPointGrade);
            printf("You passed!");
        }
        else if (grade >= 83)
        {
            fourPointGrade = 3.0;
            printf("Grade: %.1f\n", fourPointGrade);
            printf("You passed!");
        }
        else if (grade >= 89)
        {
            fourPointGrade = 3.5;
            printf("Grade: %.1f\n", fourPointGrade);
            printf("You passed!");
        }
        else if (grade >= 94)
        {
            fourPointGrade = 4.0;
            printf("Grade: %.1f\n", fourPointGrade);
            printf("You passed!");
        }
    }
    else
    {
        printf("You failed!");
    }
}

float getGrade()
{
    float userGrade;

    scanf("%f", &userGrade);

    return userGrade;
}