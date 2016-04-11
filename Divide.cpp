#include "Divide.h"


Divide::Divide(float a,float b):Operation(a,b)
{
}


Divide::~Divide(void)
{
}

float Divide::GetResult()
{
	return numberA/numberB;
}
