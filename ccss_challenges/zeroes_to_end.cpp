/*

Given an array of numbers, write a function to move all the 0's to the end
of the array while maintaining the relative order of the non zero elements.

Example:
```
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
```
*/

#include <iostream>
#include <vector>

std::vector<int> arr = { 0, 1, 0, 3, 12 };

int main() 
{
	for (int i : arr) 
	{
		if (vec[i] == 0) 
		{
			vec.erase(vec.begin() + i);
			vec.push_back(0);
		}
	}

	for (int i : arr) 
	{
		std::cout << i;
	}

	return 0;
}