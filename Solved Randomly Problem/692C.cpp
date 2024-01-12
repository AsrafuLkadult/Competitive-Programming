// CPP program to check the number
// is divisible by all digits are not.
#include <bits/stdc++.h>
using namespace std;
bool checkDivisibility(long long n, long long digit)
{
	return (digit != 0 && n % digit == 0);
}

bool allDigitsDivide(long long n)
{
	long long temp = n;
	while (temp > 0) {
		long long digit = temp % 10;
		if (!(checkDivisibility(n, digit)))
			return false;

		temp /= 10;
	}
	return true;
}

int main()
{

       int t;
       cin>>t;
        while(t--){
	long long n ;
	  cin>>n;

	if (allDigitsDivide(n+0))
		cout <<n+0<<endl;
		 else if (allDigitsDivide(n+1))
		cout <<n+2<<endl;
    else if (allDigitsDivide(n+2))
		cout <<n+2<<endl;
		else if (allDigitsDivide(n+3))
		cout <<n+3<<endl;
		else if (allDigitsDivide(n+4))
		cout <<n+4<<endl;
		else if (allDigitsDivide(n+5))
		cout <<n+5<<endl;
		else if (allDigitsDivide(n+6))
		cout <<n+6<<endl;
	  else if (allDigitsDivide(n+7))
		cout <<n+7<<endl;
		else if (allDigitsDivide(n+8))
		cout <<n+8<<endl;
		else cout <<n+9<<endl;
}
	return 0;
}
