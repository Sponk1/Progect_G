#include "CalculationsDiets.h"

double Diet::KklaPerDay()
{
	if (genere == "мужской")
	{
		kkal = 66 + (13.7 * weight) + (5 * height) - (6.8 * age);
		return kkal;
	}
	else if (genere == "женский")
	{
		kkal = 655 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
		return kkal;
	}
}

