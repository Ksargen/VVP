#include <pch.h>
#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>


using namespace std;

int main()
{
	int A;
	int B;
	int C;
	setlocale(LC_ALL, "Rus");
	cout << "Введите три координаты: ";
	cin >> A >> B >> C;
	double N = std::fmin(A, std::fmin(B, C));
	int A1 = A - N;
	int B1 = B - N;
	int C1 = C - N;
	if (A1 == 0)
		cout << "\nПроизведение АС и ВС: " << C1 * abs(C1 - B1);
	if (B1 == 0)
		cout << "\nПроизведение длин АС и ВС: " << C1 * abs(A1 - C1);
	if (C1 == 0)
		cout << "\nПроизведение длин АС и ВС: " << A1 * abs(B1 - C1);
	return 0;
}