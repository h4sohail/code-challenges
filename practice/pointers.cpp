// The function update(int* a, int* b) reads two
// int pointers as the arguments, and sets the value of 'a'
// with their sum, and the value of 'b' with their 
// absolute difference.
// a = a + b
// b = |a - b|

#include <iostream>
#include <cmath>

void update(int* a, int* b)
{
	const int a_val = *a;
	const int b_val = *b;
	*a = a_val + b_val;
	*b = abs(a_val - b_val);
}

int main()
{
	int a, b;

	std::cout << "Please enter the value for a: " << std::endl;
	std::cin >> a;
	std::cout << "Please enter the value for b: " << std::endl;
	std::cin >> b;

	update(&a, &b);

	std::cout << "a = " << a << std::endl << "b = " << b << std::endl;

	return 0;
}