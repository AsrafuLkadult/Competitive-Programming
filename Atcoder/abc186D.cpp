
#include <iostream>
using namespace std;

void isDigitPresent()
{
      int x,d=7;
      cin>>x;
	while (x > 0)
	{
		if (x % 10 == d)
			break;

		x = x / 10;
	}

	// If loop broke
	return (x > 0);
}

void printNumbers(int n, int d)
{
	// Check all numbers one by one
	for (int i = 0; i <= n; i++)

		// checking for digit
		if (i == d || isDigitPresent(i, d))
			cout << i << " ";
}

// Driver code
int main()
{

	printNumbers();
	return 0;
}
