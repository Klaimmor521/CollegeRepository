#include <iostream>
using std::cout;

int reverseNumber(int number, int reversed = 0)
{
	if (number == 0)
		return reversed;
	return reverseNumber(number / 10, reversed * 10 + number % 10);
}

int main()
{
	int number = 63925;
	cout << reverseNumber(number);
}