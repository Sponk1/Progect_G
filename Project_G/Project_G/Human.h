#pragma once
#include <iostream>

using namespace std;


class Human
{
protected:
	//параметры человека
	string genere;			//гендер
	double weight;			//вес
	double height;			//рост
	string typeOfActivity;	//вид активности(мала€(1200ккл), низка€(1375ккл), умеренна€(1550ккл), т€жела€(1900ккл))

public:
	//конструкторы по умолчани€ю
	Human();
	Human(string g, double w, double h, string toa);

	//получение информыции каждого параметра и его вывод
	//гнедер
	void setGenere(string g);
	string getGenere();
	//вес
	void setWeight(double w);
	double getWeight();
	//рост
	void setHeight(double h);
	double getHeight();
	//вид активности
	void setActivity(string toa);
	string getActivity();

};

