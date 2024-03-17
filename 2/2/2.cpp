#include <iostream>
#define SUM(a,b) ((a)-(b))
int main()
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUM(a, b) << std::endl;
	std::cout << SUM(a, b) * c << std::endl;
	std::cout << SUM(a, b + c) * c << std::endl;
}