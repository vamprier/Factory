#ifndef OPFDIVIDE_H
#define OPFDIVIDE_H

#include "operationfactory.h"

class OperationFactoryDivide : public OperationFactory
{
public:
	OperationFactoryDivide(float a,float b);
	~OperationFactoryDivide(void);
public:
	virtual void CreateOperation();
};

#endif


