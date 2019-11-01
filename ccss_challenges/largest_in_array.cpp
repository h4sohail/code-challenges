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

std::vector<int> arr = { 1, 4, 2, 7, 10, 8 };

int main()
{
	while (!(arr.size() == 1))
	{
		if (arr[1] > arr[0])
			arr.erase(arr.begin());
		else
			arr.erase(arr.begin() + 1);
	}

	int largestNumber = arr[0];
	std::cout << largestNumber;

	return largestNumber;
}
