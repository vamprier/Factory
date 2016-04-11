#ifndef MUTIPLY_H
#define MUTIPLY_H

#include "operation.h"
class Mutiply : public Operation
{
public:
	Mutiply(float a,float b);
	~Mutiply(void);
public:
	virtual float GetResult();
};

#endif

