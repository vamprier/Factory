// Factory.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "OperationFactoryAdd.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	OperationFactory* cc = new OperationFactoryAdd(3,5);
	cc->CreateOperation();
	cout<<cc->GetResult()<<endl;

	cin.ignore();
	return 0;
}

