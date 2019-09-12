#pragma once
#include <iostream>
#include "Container.h"
class MyArray:Container
{
	int size;
	int *ar;
public:
	MyArray(int size);

	void show() override
	{

	};
	~MyArray();
};

