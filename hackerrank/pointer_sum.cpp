// update(int* a, int* b)
// Takes two int pointers as the arguments, and sets 
// the value of 'a' with their sum, and the value of 
// 'b' with their absolute difference.
// a = a + b
// b = |a - b|


#include <iostream>
#include <cmath>

void update(int*, int*);

void update(int* a, int* b)
{
	const int a_val = *a;
	const int b_val = *b;
	*a = a_val + b_val;
	*b = std::abs(a_val - b_val);
}

int main(int a, int b)
{
	std::cout << "Please enter the value for a: ";
	std::cin >> a;
	std::cout << "Please enter the value for b: ";
	std::cin >> b;

	update(&a, &b);

	std::cout << "a = " << a << std::endl << "b = " << b << std::endl;

	std::system("pause");

	return 0;
}
