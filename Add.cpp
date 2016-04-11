#include "Add.h"


Add::Add(float a,float b):Operation(a,b)
{
}


Add::~Add(void)
{
}

float Add::GetResult()
{
	return numberA+numberB;
}
