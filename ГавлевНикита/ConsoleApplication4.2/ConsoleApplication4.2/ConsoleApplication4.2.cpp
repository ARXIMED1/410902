﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	const int lines = 4, columns = 4;

	float new_my_list[lines][columns];
	float max_value = 0;
	int my_list[lines][columns];
	for (int i = 0; i < lines; i++)
		for (int j = 0; j < columns; j++)
		{
			cout << "Введите значение " << i + 1 << " строки " << j + 1 << " столбца: ";
			cin >> my_list[i][j];
		}
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (fabs(my_list[i][j]) > fabs(max_value))
			{
				max_value = my_list[i][j];
			}
		}
		for (int j = 0; j < columns; j++)
		{
			new_my_list[i][j] = my_list[i][j] / max_value;
		}
		max_value = 0;
	}
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << "Значение массива c номером строки " << i + 1 << " и номером столбца " << j + 1 << " поделенное на максимальное по модулю значение в строке это ";
			cout << new_my_list[i][j] << endl;
		}
	}
}
