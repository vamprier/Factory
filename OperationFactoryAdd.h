#ifndef OPFADD_H
#define OPFADD_H

#include "operationfactory.h"
class OperationFactoryAdd : public OperationFactory
{
public:
	OperationFactoryAdd(float a,float b);
	~OperationFactoryAdd(void);
public:
	virtual void CreateOperation();
};


#endif

