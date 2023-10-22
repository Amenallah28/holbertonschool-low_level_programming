#include "main.h"

/**
  * _islower - a function that checks for lowercase character.
  * @c: check c
  * Return:0
  */

int _islower(int c)

{

	if (c < 123 && c > 97)
	{
		return (1);
	}
	else
		return (0);
}
