#include <Windows.h>
#include <iostream>
#include <cmath>
#include <string>
#include "Human.h"
#include "CalculationsDiets.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Human man("Ivan", "�������", 63, 169, "������", 19);
	Diet kk1;
	//double a = kk1.KklaPerDay(&man);
	//cout << a;
	kk1.getInfoRitionalDiet();
}