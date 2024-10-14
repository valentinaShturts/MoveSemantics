#include "DynamicArray.h"
#include<Windows.h>

// default constructor
MyArray::MyArray():ptr(nullptr),size(0)
{}

// constructor 1 param
MyArray::MyArray(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S];	
}

// copy constructor
MyArray::MyArray(const MyArray & a)
{	
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
	cout << "Copy construct\n";
}

// destructor
MyArray::~MyArray()
{
	cout << "Destruct\n";
	if (ptr != 0)
	{
		delete[] ptr;
    }
	Sleep(1000);
}

// operator=
MyArray& MyArray::operator=(const MyArray& obj)
{
	if (this != &obj) {
		delete[] ptr;
		cout << "Operator =\n";
		size = obj.size;
		ptr = new int[size];
		for (int i = 0; i < size; i++)
		{
			ptr[i] = obj.ptr[i];
		}
	}
	return *this;
}

MyArray::MyArray(MyArray&& obj)
{
	size = obj.size;
	obj.size = 0;
	ptr = obj.ptr;
	obj.ptr = nullptr;
	cout << "Move constructor" << endl;
}

MyArray& MyArray::operator=(MyArray&& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	delete[]ptr;
	obj.size = 0;
	ptr = obj.ptr;
	obj.ptr = nullptr;
	cout << "Move =" << endl;
	return *this;
}



void MyArray::Input()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void MyArray::Output()
{
	for (int i = 0; i < size; i++)
	{
		cout<<ptr[i] <<"\t";
	}
	cout << "\n---------------------------------\n";
}
