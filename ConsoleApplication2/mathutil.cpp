#include "mathutil.h"

bool is_pow_of_two(unsigned int x)
{
	return ((x&(x-1)) == 0) && (x != 0);
}
