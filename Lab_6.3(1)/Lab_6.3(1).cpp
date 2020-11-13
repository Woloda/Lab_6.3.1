// 1 Спосіб --- "Ітераційний"
#include <iostream>
#include <time.h>
#include <iomanip>
#include <Windows.h>

template <typename L> // шаблон функції 1

void value_elements1(L* masuv_a, L elements, L Low, L High)
{
	L p_index = 0;
	for (L index = p_index; index < elements; index++)
	{
		masuv_a[index] = Low + rand() % (High - Low + 1);
	}
}

template <typename G> // шаблон функції 2

void vuvestu1(G* masuv_a, G elements)
{
	G p_index = 0;
	for (G index = p_index; index < elements; index++)
		std::cout << std::setw(5) << masuv_a[index];
	std::cout << std::endl;
	std::cout << std::endl;
}

template <typename F> // шаблон функції 3

F suma1(F* masuv_a, F elements)
{
	F sum = 0;
	F p_index = 0;
	for (F index = p_index; index < elements; index++)
	{
		sum += masuv_a[index];
	}
	return sum;
}

// 1

void value_elements(int* masuv_a, const int elements, int Low, int High);
void vuvestu(int* masuv_a, const int elements);
int suma(int* masuv_a, const int elements);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	const int elements = 20;
	int masuv_a[elements];

	int Low = -30;
	int High = 40;

	value_elements(masuv_a, elements, Low, High);
	std::cout << "сформований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu(masuv_a, elements);

	int sum = suma(masuv_a, elements);
	std::cout << std::endl;
	std::cout << "Сума елементів які задовольняють вказаному критерію: " << sum << std::endl;
	std::cout << std::endl;

	value_elements1(masuv_a, elements, Low, High);
	std::cout << "сформований масив: " << std::endl;
	std::cout << std::endl;
	vuvestu1(masuv_a, elements);

	int sum1 = suma1(masuv_a, elements);
	std::cout << std::endl;
	std::cout << "Сума елементів які задовольняють вказаному критерію: " << sum1 << std::endl;

	return 0;
}

void value_elements(int* masuv_a, const int elements, int Low, int High)
{
	int p_index = 0;
	for (int index = p_index; index < elements; index++)
	{
		masuv_a[index] = Low + rand() % (High - Low + 1);
	}
}

void vuvestu(int* masuv_a, const int elements)
{
	int p_index = 0;
	for (int index = p_index; index < elements; index++)
		std::cout << std::setw(5) << masuv_a[index];
	std::cout << std::endl;
	std::cout << std::endl;
}

int suma(int* masuv_a, const int elements)
{
	int sum = 0;
	int p_index = 0;
	for (int index = p_index; index < elements; index++)
	{
		sum += masuv_a[index];
	}
	return sum;
}
