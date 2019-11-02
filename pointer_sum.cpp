#include <iostream>

// update(int* a, int* b)
// Takes two int pointers as the arguments, and sets 
// the value of 'a' with their sum, and the value of 
// 'b' with their absolute difference.
// a = a + b
// b = |a - b|

void update(int*, int*); // update function prototype
int abs(int,int); // abs function prototype

int main() {
	int a, b;

	std::cout << "Please enter the value for a: ";
	std::cin >> a;
	std::cout << "Please enter the value for b: ";
	std::cin >> b;

	update(&a, &b);

	std::cout << "a + b = " << a << " , " << "|a - b| = " << b << "\n";

	std::system("pause");

	return 0;
}

void update(int* a, int* b) {
	const int a_val = *a;
	const int b_val = *b;
	*a = a_val + b_val;
	*b = abs(a_val - b_val);
}

int abs(int a, int b) {
	return a > b ? a : b;
}