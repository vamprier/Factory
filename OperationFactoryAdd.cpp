#include "OperationFactoryAdd.h"
#include "Add.h"


OperationFactoryAdd::OperationFactoryAdd(float a,float b):OperationFactory(a,b)
{
}


OperationFactoryAdd::~OperationFactoryAdd(void)
{
}

void OperationFactoryAdd::CreateOperation()
{
	oper = new Add(numberA,numberB);
}
