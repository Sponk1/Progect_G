#include "CalculationsDiets.h"

Diet::Diet()
{
	kkal = 0;
	human = nullptr;
}

double Diet::KklaPerDay(Human* h)
{
	double k;//����������� ����������
	//������� ������������ ����������
	if (h->getActivity() == "������")
	{
		k = 1.20;
	}
	else if (h->getActivity() == "�������")
	{
		k = 1.38;
	}
	else if (h->getActivity() == "���������")
	{
		k = 1.55;
	}

	//������� ���� � ����
	if (h->getGenere() == "�������" or h->getGenere() == "�������")
	{
		return (66 + (13.7 * h->getWeight()) + (5 * h->getHeight()) - (6.8 * h->getAge())) * k;
	}
	else if (h->getGenere() == "�������" or h->getGenere() == "�������")
	{
		return (655 + (9.6 * h->getWeight()) + (1.8 * h->getHeight()) - (4.7 * h->getAge())) * k;
	}
}

void Diet::getInfoRitionalDiet()
{
	cout << "������������ ������� � ��� ������� ��������, ������� ��������� ��� ��������������� ����������� " << "\n" << "� �������������� ��������, �������� ����������� ���������(�����, ����, ��������, ��������, ��������, �������������, ������ �������� ��������) ����������� �� ������ � ��������, ���������� ���������� �.�." << endl;
	cout << endl;
	cout << "�������� ������� �� ���� ������������ � ������� �� �� ����, ����� ������, ����� �� ��������� ��������" << "\n" << "������� ������� � ���� ������� ��������� ��� ��������, �������� �� ����������� ���������� �������.������������ ������� �������� � ���� ���������������� �������.����������� �������� �������������� �������, ����� ����� ���� ���������� � ���������� � 4-5 ����� � ���� � �� �� �����. ������� ������ ���������� 25% ��������� �������, ���� � 35%, ������� � 15%, ���� � 25%. ������� ������� �� �������, ��� �� 3 ���� �� ���.";
}

