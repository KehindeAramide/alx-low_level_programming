#include "main.h"
/**
 * Alternate solution
 */

int _islower(int c)
{	
	char alph

	for (alph = "a"; alph <= "z"; alph++)
		if (alph == c)
			return 1;
		else
			return 0;
}
