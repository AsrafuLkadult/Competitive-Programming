#include <stdio.h>
#include <string.h>
void isPalindrome(char str[])
{
	int l = 0;
	int h = strlen(str) - 1;


	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			printf("%s is a not Palindrome", str);
			return;
		}
	}
	printf("%s is a palindrome", str);
}

int main()
{
    char str[6];
    printf("Enter the fiver character letter : ");
    gets(str);
	isPalindrome(str);

	return 0;
}

