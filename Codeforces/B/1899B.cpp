/*
Author: Karim Tarek Ibrahim
Problem name: 250 Thousand Tons of TNT
Problem link: https://codeforces.com/problemset/problem/1899/B
Date: 17/11/2023
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int arr[150001];
int main()
{
	int t; cin >> t;
	while (t--)
	{
		vector<long long> v, answer;
		int n; cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		if (n == 1)
			cout << 0 << endl;
		else if (n == 2)
			cout << abs(arr[0] - arr[1]) << endl;
		else
		{
			for (int i = 2; i <= n / 2; i++)
			{
				if (n % i == 0)
					v.push_back(n / i);
			}
			sort(v.begin(), v.end());
			reverse(v.begin(), v.end());
			int Size = v.size();
			long long mx = *max_element(arr, arr + n);
			long long mn = *min_element(arr, arr + n);
			answer.push_back(mx - mn);
			vector<long long> comp;
			while (Size--)
			{
				int x = v.back();
				int tmp = 1;
				long long sum = 0;
				for (int i = 0; i < n; i++)
				{
					if (tmp == x)
					{
						sum += arr[i];
						comp.push_back(sum);
						sum = 0;
						tmp = 1;
						continue;
					}
					sum += arr[i];
					tmp++;
				}
				long long Max = *max_element(comp.begin(), comp.end());
				long long Min = *min_element(comp.begin(), comp.end());
				answer.push_back(Max - Min);
				comp.clear();
				v.pop_back();
			}
			cout << *max_element(answer.begin(), answer.end()) << endl;
		}
	}
 
	return 0;
}
