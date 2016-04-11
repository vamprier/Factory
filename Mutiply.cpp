#include "Mutiply.h"


Mutiply::Mutiply(float a,float b):Operation(a,b)
{
}


Mutiply::~Mutiply(void)
{
}

float Mutiply::GetResult()
{
	return numberA*numberB;
}
