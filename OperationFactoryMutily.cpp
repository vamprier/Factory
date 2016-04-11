#include "OperationFactoryMutily.h"
#include "Mutiply.h"


OperationFactoryMutily::OperationFactoryMutily(float a,float b):OperationFactory(a,b)
{
}


OperationFactoryMutily::~OperationFactoryMutily(void)
{
}

void OperationFactoryMutily::CreateOperation()
{
	oper = new Mutiply(numberA,numberB);
}


