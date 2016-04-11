#ifndef ADD_H
#define ADD_H

#include "operation.h"

class Add : public Operation
{
public:
	Add(float a,float b);
	~Add(void);
public:
	virtual float GetResult();
};

#endif