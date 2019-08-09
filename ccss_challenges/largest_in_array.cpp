/*
Write a function that takes an array of numbers as input and outputs the 
maximum value in the array.
You may assume that the input array will always have a length greater than 0.
Example:
```
Input : [1, 4, 2, 7, 10, 8]
Output: 10
```
*/

#include <iostream>
#include <vector>

int arr[] = { 1, 4, 2, 7, 10, 8 };

int main() 
{	
	std::vector<int> vec;
	size_t size = (sizeof(arr) / sizeof(arr[0]));

	for (size_t i = 0; i < size; i++) 
	{
		vec.push_back(arr[i]);
	}

	while (!(vec.size() == 1)) 
	{
		if (vec[1] > vec[0])
			vec.erase(vec.begin());
		else
			vec.erase(vec.begin() + 1);
	}

	int largestNumber = vec[0];
	std::cout << largestNumber;
	
	return largestNumber;
}