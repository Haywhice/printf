#include "main.h"

int puchar(char c)
{
	return (write(1, &c, 1));
}
