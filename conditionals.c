#include <stdio.h>

float getGrade();

int main()
{
    float grade;
    float fourPointGrade;

    // input from user
    grade = getGrade();
    
    //If statements
    // The classic conditional statements
    // If statement: if the condition is true, then the block of code inside it will be executed.
    // else if statment: if the condition/s above is false, but this condition is true, then the block of code inside it will be executed.
    //else statement: if all conditions is false, then the block of code inside the else statement it will be executed.
    printf("If statements:\n");

    // print if you passed or fail
    if (grade >= 60)
    {
        fourPointGrade = 1.0;
        printf("Grade: %.1f\n", fourPointGrade);

        if (grade >= 66)
        {
            fourPointGrade = 1.5;
            printf("Grade: %.1f\n", fourPointGrade);
        }
        else if (grade >= 72)
        {
            fourPointGrade = 2.0;
            printf("Grade: %.1f\n", fourPointGrade);
        }
        else if (grade >= 78)
        {
            fourPointGrade = 2.5;
            printf("Grade: %.1f\n", fourPointGrade);
        }
        else if (grade >= 83)
        {
            fourPointGrade = 3.0;
            printf("Grade: %.1f\n", fourPointGrade);
        }
        else if (grade >= 89)
        {
            fourPointGrade = 3.5;
            printf("Grade: %.1f\n", fourPointGrade);
        }
        else if (grade >= 94)
        {
            fourPointGrade = 4.0;
            printf("Grade: %.1f\n", fourPointGrade);
        }
        
    	printf("You passed!\n");
    }
    else
    {
        printf("You failed!\n");
    }
    
    //switch statements
    // switch statements: execute different actions for different cases based on one given value.
	//case: a specific condition that will execute if it's true.
	// break: breaks the execution of the swtich case.
	// Note: It only takes integer values
    printf("\nswitch cases:\n");
    switch((int)grade)
    {
    	case 100:
    		printf("You got a perfect score!!!\n");
    		break;
    		
    	default:
    		printf("You did not get a perfect score\n");
    		break;
	}
	
	// ternary operator
	// a simple conditional operator to assign a value of a single variable based on the condition/s given
	printf("\nternary operator:\n");
	
	//simple ternary operator
	// format: condition A ? value A: value B
	// ? - then
	// : - else
	char message1 = (grade >= 90)? 'A': 'B';
	printf("Level %c\n", message1);
	
	// ternary multiple condition
	// format: condition A ? value A : condition B ? value B :  value C
	// ? - then
	// : - else/ else if
	char message2 = (grade / 50 == 2)? 'R': (grade / 50 == 1)? 'B' : 'C';
	printf("Mode: %c\n", message2);
	
}

float getGrade()
{
    float userGrade;

    scanf("%f", &userGrade);

    return userGrade;
}
