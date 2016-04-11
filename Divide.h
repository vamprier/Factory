#ifndef DIVIDE_H
#define DIVIDE_H

#include "operation.h"
class Divide : public Operation
{
public:
	Divide(float a,float b);
	~Divide(void);
public:
	virtual float GetResult();
};

#endif


