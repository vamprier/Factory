#include "OperationFactorySub.h"
#include "Sub.h"


OperationFactorySub::OperationFactorySub(float a,float b):OperationFactory(a,b)
{
}


OperationFactorySub::~OperationFactorySub(void)
{
}

void OperationFactorySub::CreateOperation()
{
	oper = new Sub(numberA,numberB);
}