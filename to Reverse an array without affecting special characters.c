// C program to reverse a string with special characters
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
// Returns true if x is an alphabetic character, false
// otherwise
bool isAlphabet(char x)
{
	return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
}

void reverse(char str[])
{
	// Initialize left and right pointers
	int r = strlen(str) - 1, l = 0;

	// Traverse string from both ends until 'l' and 'r'
	while (l < r) {
		// Ignore special characters
		if (!isAlphabet(str[l]))
			l++;
		else if (!isAlphabet(str[r]))
			r--;
		// Both str[l] and str[r] are not special
		else {
			char temp = str[l];
			str[l] = str[r];
			str[r] = temp;
			// swap(str[l], str[r]);
			l++;
			r--;
		}
	}
}

// Driver code
int main()
{
	char str[] = "a!!!b.c.d,e'f,ghi";
	printf("Input string: %s\n", str);
	reverse(str);
	printf("Output string: %s\n", str);
	return 0;
}

// This code is contributed by Sania Kumari Gupta

