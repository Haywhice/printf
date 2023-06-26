#include "header.h"
#include <stdio.h>

int main(void)
{
	char letter = 'a';
	int val1, val2;
	char name[] = "Ayomide _Lala project";

/* Using the C standard printf() function */
	puts("\nUsing printf()\n---");
	val1 = printf("%c man\n", letter);
	printf("the value is %d\n", val1);

	puts("\n-----------------------");
/* Using the user-defined my_printf() function */
	puts("\nUsing my_printf()\n---");
	val2  = my_printf("%c man\n", letter);
	printf("the value is %d\n", val2);

	return (0);
}
