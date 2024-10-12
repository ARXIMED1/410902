#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

double division(int x1, int x2)
{
	return static_cast<double> (x1) / x2;
}

complex<double> division(complex<double> z1, complex<double> z2)
{
	return (z1 / z2);
}

void printcomplex(complex<double> z)
{
	double real = z.real();
	double imag = z.imag();
	if (imag >= 0)
		cout << real << " + " << imag << "i";
	else
		cout << real << " - " << abs(imag) << "i";
}

int main()
{
	string answer;
	setlocale(LC_ALL, "RU");
	while (true)
	{
		cout << "���� �� ������ ������ ����� ����� ������� 0, ���� ����������� 1: ";
		cin >> answer;
		if (answer == "0")
		{
			int x1, x2;
			cout << "������� 1 � 2 ����� ����� ������ ";
			cin >> x1 >> x2;
			cout << division(x1, x2) << endl;
		}
		else if (answer == "1")
		{
			double real1, imag1, real2, imag2;
			cout << "������� 1 ����������� ����� � ���� x + iy, ��� x - ��� ������ ����, � y - ������ (����������� ��������) ";
			cin >> real1 >> imag1;
			cout << "������� 2 ����������� ����� � ���� x + iy, ��� x - ��� ������ ����, � y - ������ (����������� ��������) ";
			cin >> real2 >> imag2;
			complex<double> result = division(complex<double>(real1, imag1), complex<double>(real2, imag2));
			cout << "��������� ������� ����������� �����: ";
			printcomplex(result);
			cout << endl;
		}
		else
		{
			cout << "������� ������������ ��������" << endl;
		}
	}
}