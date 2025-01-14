

#include <iostream>

int main()
{

	int battery = 0;
	int kiloMeters = 7;
	float cost = 16.37;

	std::cout << "please enter capacity of the battery" << std::endl;
	std::cin >> battery;

	std::cout << "how many kilometers do you wish to travel in " << std::endl;
	std::cin >> kiloMeters;

	int journey = battery / kiloMeters;
	int totalDestination = battery / kiloMeters + cost;

	std::cout << "the total cost is " << totalDestination << "and the total journey is" << journey << std::endl;

	return 0;
}