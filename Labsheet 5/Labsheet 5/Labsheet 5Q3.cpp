

#include <iostream>

int main3()
{
	int kiloMeters = 0;
	float totalCost = 16.37;

	std::cout << "Please enter the number of kilometers you want to travel" << std::endl;
	std::cin >> kiloMeters;

	float result = totalCost * kiloMeters;

	std::cout << "if you enter in " << kiloMeters << " Kilometers. The total cost of travel would be " << result << std::endl;
	return 0;
}