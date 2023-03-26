#include "Human.h"

Human::Human()
{
	genere = ""; weight = 0; height = 0; typeOfActivity = "";
}

Human::Human(string g, double w, double h, string toa)
{
	genere = g; weight = w; height = h; typeOfActivity = toa;
}

// геттеры и сэттеры
void Human::setGenere(string g) { genere = g; }

string Human::getGenere() { return genere; }

void Human::setWeight(double w) { weight = w; }

double Human::getWeight() { return weight; }

void Human::setHeight(double h) { height = h; }

double Human::getHeight() { return height; }

void Human::setActivity(string toa) { typeOfActivity = toa; }

string Human::getActivity() { return typeOfActivity; }