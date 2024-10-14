#pragma once
#include <iostream>
using namespace std;

class MyArray
{
	int * ptr; // указатель на динам. массив
	int size;  // размер массива 
public:
	MyArray();
	MyArray(int);
	MyArray(const MyArray&); // copy constructor
	~MyArray();
	MyArray& operator=(const MyArray& obj); // operator=
	MyArray(MyArray&& obj); //move constructor
	MyArray& operator=(MyArray&& obj);

	void Input();// rand
	void Output();// вывод на консоль





};

