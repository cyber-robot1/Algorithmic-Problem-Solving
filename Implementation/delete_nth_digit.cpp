/*
Author: Karim Tarek Ibrahim
*/
// This is a function to delete a n-th digit from a given number, and this number mustn't be 10 | 100 | 1000 | 10000 and so on..

#include <iostream>
using namespace std;

// we delete the digit from the end of the given number.
int deleteDigit(int num, int n)
{
	
  // to reverse the given number with skipping the nth digit that should be deleted.
  int rev_num = 0;
	for (int i = 1; num != 0; i++)
	{
		int digit = num % 10;
		num = num / 10;
		if (i == n)
			continue;
		else
			rev_num = (rev_num * 10) + digit;
	}
  
  // to reverse the given number back to its original state with skipping the nth digit. 
	int new_num = 0;
	for (int i = 0; rev_num != 0; i++)
	{
		int digit = rev_num % 10;
		rev_num = rev_num / 10;
		new_num = (new_num * 10) + digit;
	}
	return new_num;
}

int main()
{
	
	int x, y;                      // x = the given number, y = the number of digit should be deleted.
	cin >> x >> y;
	cout << deleteDigit(x, y);


	return 0;
}
