#include <iostream>

int main()
{
	int num = 1;
	const int& num_ref = num;
	std::cout << "num = " << num << " || num_ref =" << num_ref << std::endl;
	num = 2;
	std::cout << "num = " << num << " || num_ref =" << num_ref << std::endl;
	return 0;
}