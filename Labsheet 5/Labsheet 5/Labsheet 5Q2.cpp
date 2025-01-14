

#include <iostream>

int main2()
{
	int kilometers = 7;
	int batteries = 0;

	std::cout << "how many kilometers do you wish to travel"  << std::endl;
	std::cin >> batteries; 

	int total =  batteries / kilometers;

	std::cout << "You can travel up " << total << " kilometers" << std::endl;

	return 0;
}