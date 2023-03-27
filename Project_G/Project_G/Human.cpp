#include "Human.h"

Human::Human()
{
	genere = ""; weight = 0; height = 0; typeOfActivity = ""; age = 0; name = "";
}

Human::Human(string n, string g, double w, double h, string toa, double a)
{
	genere = g; weight = w; height = h; typeOfActivity = toa; age = a; name = n;
}

// ������� � �������
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

//���������� ���������� ������� ����� � ������

ostream& operator<<(ostream& os, Human& obj)
{
	os << "���� ���: " << obj.name << endl;
	os << "��� ���: " << obj.genere << endl;
	os << "��� �������: " << obj.age << endl;
	os << "��� ���: " << obj.weight << ", ��� ����: " << obj.height << endl;
	os << "��� ��� �����������: " << obj.typeOfActivity << endl;

	return os;
}
