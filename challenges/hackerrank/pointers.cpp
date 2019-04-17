// The function update(int* a, int* b) reads two
// integers as the arguments, and sets the value of 'a'
// with their sum, and the value of 'b' with their 
// absolute difference.
// a = a + b
// b = |a - b|

#include <iostream>
#include <math.h>
#define LOG std::cout << "Hello World!\n";
using namespace std;

void update(int* a, int* b)
{
	int a_val = *a;
	int b_val = *b;
	*a = a_val + b_val;
	*b = abs(a_val - b_val);
}

int main()
{
	int a, b;
	int* ptr_a = &a;
	int* ptr_b = &b;

	cout << "Please enter the value for a: " << endl;
	cin >> a;
	cout << "Please enter the value for b: " << endl;
	cin >> b;

	update(ptr_a, ptr_b);

	cout << "a = " << a << endl << "b = " << b << endl;
	
	LOG;
	return 0;
}
