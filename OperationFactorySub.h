#ifndef OPFSUB_H
#define OPFSUB_H

#include "operationfactory.h"

class OperationFactorySub : public OperationFactory
{
public:
	OperationFactorySub(float a,float b);
	~OperationFactorySub(void);
public:
	virtual void CreateOperation();
};

#endif

