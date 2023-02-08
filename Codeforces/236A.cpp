/*
Author: Karim Tarek Ibrahim
Problem name: Boy or Girl
Problem link: https://codeforces.com/problemset/problem/236/A
Date: 9/2/2023
*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s;
    int temp, c = 0;    //(c)=> Counting distinct characters in the given string
    cin >> s;
    
    // Removing duplicate characters from the given string
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
            temp = 1;
        else
            temp = 0;
        
        for (int j = temp; j < s.size(); j++)
        {
            if (i == j)
                continue;
            
            else
            {
                if (s[i] == s[j])
                    s[j] = '\0';
            }
        }
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '\0')
            continue;
 
        else
            c++;
    }
 
    if (c % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    
    return 0;
}
