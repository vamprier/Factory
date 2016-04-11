#include "OperationFactoryDivide.h"
#include "Divide.h"


OperationFactoryDivide::OperationFactoryDivide(float a,float b):OperationFactory(a,b)
{
}


OperationFactoryDivide::~OperationFactoryDivide(void)
{
}

void OperationFactoryDivide::CreateOperation()
{
	oper = new Divide(numberA,numberB);
}