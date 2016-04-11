#ifndef OPERATION_H
#define OPERATION_H


class Operation
{
public:
	Operation(float a,float b);
	virtual ~Operation(void);
public:
	void SetNumberA(float a);
	void SetNumberB(float b);
	float GetNumberA();
	float GetNumberB();
	virtual float GetResult() = 0;
protected:
	float numberA;
	float numberB;
};

#endif


