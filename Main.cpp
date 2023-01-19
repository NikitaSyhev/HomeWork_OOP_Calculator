//Этот проект создан с помощью классического шаблона
#include <iostream>
#include "Calculator.h"




int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;




	Calculator<double, double> C1(10.0, 5.0);     // created template class object


	std::cout << C1.sum(1.0, 6.5) << std::endl;



	try
	{
		std::cout << C1.subtract(3.0, 6.5) << std::endl;
	}
	catch (const char * str )
	{
		std::cout << str << std::endl;
	}
	

	std::cout << C1.multiply(10, 6.5) << std::endl;



	try
	{
		std::cout << C1.divide(10.0, 0) << std::endl;
	}
	catch (const char* str)
	{
		std::cout << str << std::endl;
	}

	




	return 0;
}