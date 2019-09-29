#include <iostream>
#include <cmath>
#define hello "Hello World!\n"
#define POL
#define ENG

int main()
{
#if defined POL
	std::cout << "Polski" << std::endl;
#endif
#if defined ENG
	std::cout << "English" << std::endl;
#endif

	std::cout << hello;
	std::cout << "Zadanie 1\n";
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	double delta;
	delta = b * b - 4 * a * c;
	if (delta > 0) {
		double wynik1 = (-b - sqrt(delta)) / 2 * a;
		double wynik2 = (-b + sqrt(delta)) / 2 * a;
		std::cout << wynik1 << " " << wynik2 << std::endl;
	}
	else if (delta == 0) {
		double wynik1 = (-b) / 2 * a;
		std::cout << wynik1 <<std::endl;
	}
	else {
		std::cout << "Chyba cie bao bao"<<std::endl;
	}

	std::cout << "Zadanie 2\n";

	double height;
	double mass;
	std::cout << "Podaj wage\n";
	std::cin >> mass;
	std::cout << "Podaj wysokosc\n";
	std::cin >> height;
	double bmi = mass/pow(height, 2.0);
	std::cout << "Masz BMI " << bmi << " grubasie" << std::endl;
	return 0;
}
