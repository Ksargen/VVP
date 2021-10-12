#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x;
	cin >>  x;
	int y = 3 * powf(x, 6) - 6 * powf(x, 2) - 7;
	cout << y;

}