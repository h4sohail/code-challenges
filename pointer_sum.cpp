#include <iostream>

// update(int* a, int* b)
// Takes two int pointers as the arguments, and sets 
// the value of 'a' with their sum, and the value of 
// 'b' with their absolute difference.
// a = a + b
// b = |a - b|

// max(int a, int b)
// Takes two int numbers as the arguments, and returns 
// the the greater number.

// min(int a, int b)
// Takes two int numbers as the arguments, and returns 
// the the smaller number.

void update(int*, int*); // update function prototype
int max(int, int); // max function prototype
int min(int, int); // min funciton protoype

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
	*b = max(a_val, b_val) - min(a_val, b_val);
}

int max(int a, int b) {
	return a > b ? a : b;
}

int min(int a, int b) {
	return a > b ? b : a;
}