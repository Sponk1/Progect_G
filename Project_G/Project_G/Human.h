#pragma once
#include <iostream>

using namespace std;


class Human
{
protected:
	//��������� ��������
	string genere;			//������
	double weight;			//���
	double height;			//����
	string typeOfActivity;	//��� ����������(�����(1200���), ������(1375���), ���������(1550���), �������(1900���))

public:
	//������������ �� ����������
	Human();
	Human(string g, double w, double h, string toa);

	//��������� ���������� ������� ��������� � ��� �����
	//������
	void setGenere(string g);
	string getGenere();
	//���
	void setWeight(double w);
	double getWeight();
	//����
	void setHeight(double h);
	double getHeight();
	//��� ����������
	void setActivity(string toa);
	string getActivity();

};

