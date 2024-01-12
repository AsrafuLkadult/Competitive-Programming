// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the maximum subarray sum
int maxSumSubarray(vector<int> arr, int size)
{

	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++) {
		max_ending_here = max_ending_here + arr[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

// Function to reverse the subarray arr[0...i]
void getUpdatedArray(vector<int>& arr,
					vector<int>& copy, int i)
{
	for (int j = 0; j <= (i / 2); j++) {
		copy[j] = arr[i - j];
		copy[i - j] = arr[j];
	}
	return;
}

// Function to return the maximum
// subarray sum after performing the
// given operation at most once
int maxSum(vector<int> arr, int size)
{

	// To store the result
	int resSum = INT_MIN;

	// When no operation is performed
	resSum = max(resSum, maxSumSubarray(arr, size));

	// Find the maximum subarray sum after
	// reversing the subarray arr[0...i]
	// for all possible values of i
	vector<int> copyArr = arr;
	for (int i = 1; i < size; i++) {
		getUpdatedArray(arr, copyArr, i);
		resSum = max(resSum,
					maxSumSubarray(copyArr, size));
	}

	// Find the maximum subarray sum after
	// reversing the subarray arr[i...N-1]
	// for all possible values of i

	// The complete array is reversed so that
	// the subarray can be processed as
	// arr[0...i] instead of arr[i...N-1]
	reverse(arr.begin(), arr.end());
	copyArr = arr;
	for (int i = 1; i < size; i++) {
		getUpdatedArray(arr, copyArr, i);
		resSum = max(resSum,
					maxSumSubarray(copyArr, size));
	}

	return resSum;
}

// Driver code
int main()
{
	vector<int> arr{ 6,2,-5,3,7,-3,-4};
	int size = arr.size();

	cout << maxSum(arr, size);

	return 0;
}
