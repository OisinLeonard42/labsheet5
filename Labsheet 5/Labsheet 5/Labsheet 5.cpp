

#include <iostream>

int main1()
{
	//this is used to store the variable of the numbers
	double battery = 1;
	double kiloWatt = 7;
	
	std::cout << "enter the capability of the battery for the electric car" << std::endl;
	std::cin >> battery;

	//this is how you multiply the numbers
	int result = battery * kiloWatt;

	std::cout << "You can travel up " << result <<  " kiloWatt on a full car battery" << std::endl;


	return 0;
}
