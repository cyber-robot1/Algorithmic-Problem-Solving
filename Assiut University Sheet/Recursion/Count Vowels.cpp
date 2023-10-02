/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <string>
using namespace std;
 
bool flag = true;
int c = 0;
void f(string s, int index)
{
	if (flag)
	{
		index = 0;
		flag = false;
	}
	
	if (index == s.size())
		return;
	else
	{
		if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
			c++;
		else if (s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U')
			c++;
		f(s, index + 1);
	}
}
 
int main()
{
	
	string str;
	getline(cin, str);
	f(str, 0);
	cout << c << endl;
 
	return 0;
}
