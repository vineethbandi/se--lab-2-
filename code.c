// C program to demonstrate for loop
#include <stdio.h>

int main()
{
	int gfg = 0;
	
	// 'gfg' <= 5 is the check/test expression
	// The loop will function if and only if 'gfg' is less
	// than 5
	//'gfg++' will increments it's value by this so that the
	// loop can iterate for further evaluation

	// conditional statement
	for (gfg = 1; gfg <= 5; gfg++)
	{
		// statement will be printed
		printf("GeeksforGeeks\n");
	}

	// Return statement to tell that everything executed
	// safely
	return 0;
}
