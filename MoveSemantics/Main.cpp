#pragma once
#include "DynamicArray.h"

MyArray f1(MyArray obj)
{
	return obj;
}
void main()
{
	MyArray a(5); // constructor 1 param
	a.Input();
	a.Output();

	MyArray rez = f1(a);

	rez.Output();
	a.Output();
}