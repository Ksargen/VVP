#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{	
	float x;
	cin >> x;
	float y = (4 * powf((x - 3), 6)) - 7 * (powf((x - 3), 3)) + 2;
	cout << y; 
}
