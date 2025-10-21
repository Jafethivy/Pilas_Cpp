#pragma once
#include "URL.h"

__interface Pila{
	void Push(Url url);
	void Pop();
	Url Get_element();
	int Size();
	bool Empty();
};

