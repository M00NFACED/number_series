#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	double sum = 0;
	double x = 0;
	for (int n = 2;;n++) {
		x = 1 / ((n - static_cast<double>(1)) * (n + static_cast < double>(1)));
		if (x < pow(10, -6)) {
			break;
		};
		sum = sum + x;
	}
	std::cout << "Значение числового ряда " << sum;
}