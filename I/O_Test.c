#include <stdio.h>

int main ()
{
	int x = 5;
	int y = 10;
	
	printf("%d * %d = %d\n\n", x, y, x*y);
	
	
	int nNum;
	float fNum;
	char cChar;
	
	printf ("Enter a number: ");
	scanf("%d", &nNum);
	printf("Input value is: %d", nNum);
	
	printf("\n\nEnter a float: ");
	scanf("%f", &fNum);
	printf("Input value is: %f", fNum);
	
	printf("\n\nEnter a char: ");
	scanf("%c", &cChar);
	scanf("%c", &cChar);
	printf("Input value is: %c\n", cChar);
	
	return 0;
}