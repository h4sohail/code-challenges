/*
Find the kth largest element in an unsorted array. Note that it is the kth
largest element in the sorted order, not the kth distinct element.

Example 1:
```
Input: [3,2,1,5,6,4] and k=2
Output: 5
```

Example 2:
```
Input: [3,2,3,1,2,4,5,5,6] and k=4
Output: 4
```

You may assume k is always valid, 1 <= k <= array's length. You may not
use the built in sort method.
*/

#include <iostream>
#include <limits>
#include <algorithm>

int arr[] = { 4, 1, 2, 7, 0, 100 };
int k = 1;
int largestNumber = INT_MAX;
int k_largestNumber = NULL;

int main() 
{
	int size = sizeof(arr) / sizeof(arr[0]);

	std::sort(std::begin(arr),std::end(arr),std::greater<>());

	k_largestNumber = arr[k - 1];
	
	std::cout << k_largestNumber;
	
	return k_largestNumber;
}