#pragma once
#include <iostream>
using namespace std;

class MyArray
{
	int * ptr; // ��������� �� �����. ������
	int size;  // ������ ������� 
public:
	MyArray();
	MyArray(int);
	MyArray(const MyArray&); // copy constructor
	~MyArray();
	MyArray& operator=(const MyArray& obj); // operator=
	MyArray(MyArray&& obj); //move constructor


	void Input();// rand
	void Output();// ����� �� �������





};

