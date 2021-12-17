// лабораторная работа 4, вариант 8, 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int p, q, a, k;
	k = 0;
	p = 0;
	q = 0;
	a = 0;
	const int y = 5;
	int mas[y];
	for (int i = 0; i < y; i++) 
	{
		std::cin >> mas[i];
	}
	
	for (int i = 0; i < y; i++)
	{
		p = mas[i];
		q = p % 10;
		while (p > 0) {
			if (q == (p % 10)) {
				a = a + 1;
				p = p / 10;

			}
			else {
				a = 0;
				p = 0;
			}
		}
		if (a > 1) {
			k = k + 1;
		}
		a = 0;
		
	}
	if (k > 2) {
		for (int i = 0; i < y; i++) {
			for (int j = i + 1; j < y; j++) {
				if (mas[j] > mas[i]) {
					int temp = mas[j];
					mas[j] = mas[i];
					mas[i] = temp;
				}
			}
		}
}
	for (int i = 0; i < y; i++)
	{
		std::cout << mas[i] << " ";
	}
}

