#include "Operation.h"


Operation::Operation(float a,float b):numberA(a),numberB(b)
{
}


Operation::~Operation(void)
{

}

void Operation::SetNumberA(float a)
{
	numberA = a;
}

void Operation::SetNumberB(float b)
{
	numberB = b;
}

float Operation::GetNumberA()
{
	return numberA;
}

float Operation::GetNumberB()
{
	return numberB;
}
