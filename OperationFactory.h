#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H

#include <string>
#include "Operation.h"

using namespace std;

class OperationFactory
{
public:
	OperationFactory(float a,float b);
	virtual ~OperationFactory(void);
public:
	virtual void CreateOperation()=0;
	float GetResult();
protected:
	Operation* oper;
	float numberA;
	float numberB;
};

#endif


