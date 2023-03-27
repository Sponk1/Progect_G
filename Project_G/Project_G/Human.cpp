#include "Human.h"

Human::Human()
{
	genere = ""; weight = 0; height = 0; typeOfActivity = ""; age = 0; name = "";
}

Human::Human(string n, string g, double w, double h, string toa, double a)
{
	genere = g; weight = w; height = h; typeOfActivity = toa; age = a; name = n;
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

void Human::setAge(double a) { age = a; }

double Human::getAge() { return age; }

void Human::setName(string n) { name = n; }

string Human::getName() { return name; }

//реализация перешрузки функций ввода и вывода

ostream& operator<<(ostream& os, Human& obj)
{
	os << "Ваше имя: " << obj.name << endl;
	os << "Ваш пол: " << obj.genere << endl;
	os << "Ваш возраст: " << obj.age << endl;
	os << "Ваш вес: " << obj.weight << ", ваш рост: " << obj.height << endl;
	os << "Ваш тип активоности: " << obj.typeOfActivity << endl;

	return os;
}
