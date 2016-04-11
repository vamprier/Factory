#ifndef OPFMUTILY_H
#define OPFMUTILY_H

#include "operationfactory.h"

class OperationFactoryMutily : public OperationFactory
{
public:
	OperationFactoryMutily(float a,float b);
	~OperationFactoryMutily(void);
public:
	virtual void CreateOperation();
};

#endif