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

	MyArray b(5); // constructor 1 param
	b.Input();
	b.Output();

	//MyArray rez = f1(move(a));
	b = move(a);
	//rez.Output();
	b.Output();
	a.Output();
}