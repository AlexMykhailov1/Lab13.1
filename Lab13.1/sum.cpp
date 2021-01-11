// sum.cpp
// файл реалізації функції

#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
	n = 0;
	a = x;
	s = a;

	do {
		n++;
		dod(); // виклик процедури обчислення доданку
		s += a;
	} while (x > -1 && x <= 1);
}