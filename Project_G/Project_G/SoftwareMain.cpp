#include <Windows.h>
#include <iostream>
#include <cmath>
#include <string>
#include "Human.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string a;
	Human h;
	a = h.clculatingActivity();
	Human g;
	g.setActivity(a);
	cout << g.getActivity();
	//Human g("adrey", "muzik", 35, 32, a, 32);
	//cout << g;
}