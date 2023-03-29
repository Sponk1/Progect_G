#pragma once
#include <iostream>
#include <string>
#include "Human.h"

class Diet : public Human 
{
protected:
	Human* human;
	double kkal;

public:
	//рассчет ккал
	double KklaPerDay();


};

