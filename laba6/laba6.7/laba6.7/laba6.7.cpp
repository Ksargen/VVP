
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float x, y, z;
	cin >> x;
	y = x;
	z = y * y;
	y = z * z;
	z = y * y;
	y = z * z;
	x = y * (1 / x);
    cout << x; 
}
