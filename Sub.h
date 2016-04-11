#ifndef SUB_H
#define SUB_H

#include "operation.h"

class Sub : public Operation
{
public:
	Sub(float a,float b);
	~Sub(void);
public:
	virtual float GetResult();
};

#endif


