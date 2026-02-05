#include <iostream>
using namespace std;
 
void print(int n)
{
  cout << "I love Recursion" << endl;
  if (n == 1)
    return;
  print(n - 1);
}
 
int main()
{
  int n;
  cin >> n;
  print(n);
  
  return 0;
}
