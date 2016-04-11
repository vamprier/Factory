#include "OperationFactory.h"


OperationFactory::OperationFactory(float a,float b):numberA(a),numberB(b)
{
	
}


OperationFactory::~OperationFactory(void)
{
	delete oper;
}

float OperationFactory::GetResult()
{
	return oper->GetResult();
}
