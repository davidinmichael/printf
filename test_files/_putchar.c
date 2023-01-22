#include <unistd.h>
// _putchar - function to return character to stdout
int _putchar(char c)
{
	return (write(1, &c, 1));
}/*by davidinmichael and HaryorAji*/
