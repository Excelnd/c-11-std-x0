// c+11 std x0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

struct X {
	X() { std::cout << "X"; }
};

struct Y {
	Y(const X &x) { std::cout << "Y"; }
	void f() { std::cout << "f"; }
};

int main()
{

	Y y ((X()));
	y.f();

	return 0;
}

