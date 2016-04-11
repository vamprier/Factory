#include "Sub.h"


Sub::Sub(float a,float b):Operation(a,b)
{
}


Sub::~Sub(void)
{
}

float Sub::GetResult()
{
	return numberA-numberB;
}
