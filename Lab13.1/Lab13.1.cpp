// Lab_13_1.cpp
// Михайлов Олександр
// Простори імен
// Варіант 24
// головний файл проекту – функція main

#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << " x_p should be bigger than 1!" << endl;
	do{
		cout << " x_p = "; cin >> x_p;
		if (x_p <= 1) {
			cout << " You entered wrong x_p!" << endl << endl;
		}
	} while (x_p <= 1);

	cout << " x_k = "; cin >> x_k;
	cout << " dx = "; cin >> dx;
	cout << " e = "; cin >> e;
	cout << endl;

	cout << fixed;

	cout << "----------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(10) << "   log(x + 1)" << "   |" << setw(7) << "s" << "      |" << setw(5) << "n" << "   |" << endl;
	cout << "----------------------------------------------------" << endl;

	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
		cout << "|" << setw(7) << setprecision(2) << x << "   |   " << setw(10) << setprecision(5) << log(x+1) << "   |" << setw(10) << setprecision(5) << log(x + 1) << "   |" << setw(5) << n << "   |" << endl;
		x += dx;
	}
	cout << "----------------------------------------------------" << endl;

	cin.get();
	return 0;
}