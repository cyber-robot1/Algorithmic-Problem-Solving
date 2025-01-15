/*
Author: Karim Tarek Ibrahim
Problem name: Garland
Problem link: https://codeforces.com/problemset/problem/408/B
Date: 15/1/2025
*/

#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 int main()
{
    fastIO();
    string str1, str2;
    cin>>str1>>str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    map<char, int> vasya, garland;
    int area=0;
    for(int i=0;i<str1.size();i++)
        vasya[str1[i]]++;
    for(int i=0;i<str2.size();i++)
        garland[str2[i]]++;
 
    bool flag=true;
    for(auto G=garland.begin(); G!=garland.end();G++)
    {
        flag=true;
        for(auto V=vasya.begin(); V!=vasya.end(); V++)
        {
            if(G->first == V->first)
            {
                flag=false;
                if(V->second >= G->second)
                    area += G->second;
                else
                    area += V->second;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag)
        cout<<-1;
    else
        cout<<area;
 
    return 0;
}
