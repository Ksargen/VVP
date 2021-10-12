#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y, buff;
	cin >> x >> y;
	buff = x;
	x = y;
	y = buff;

    cout << x << y; 
}
