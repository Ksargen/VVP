#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, buff;
	cin >> a >> b >> c;
	buff = a;
	a = c;
	c = b;
	b = buff;
	cout << a << b << c; 
}