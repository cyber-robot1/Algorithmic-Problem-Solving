/*
Author: Karim Tarek Ibrahim
Problem name: Word Capitalization
Problem link:  https://codeforces.com/problemset/problem/281/A
Date: 2/9/2022
*/

#include <iostream>
using namespace std;

int main()
{
	
	string word;
	cin >> word;
	if (word[0] >= 97 && word[0] <= 122)
		word[0] = word[0] - 32;
	cout << word;
	


	return 0;
}
