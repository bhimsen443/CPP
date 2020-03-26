#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec = {1,2};
	vec.reserve(2);
	std::cout << "size: " << vec.size() << std::endl;
	vec.push_back(3);
	std::cout << "size: " << vec.size() << std::endl;
	vec.push_back('H');
	std::cout << vec.front() << " " << vec.back() << std::endl;
	return 0;
}