/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
*/

class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0.0;
        int c = 0;
        int MX = *min_element(salary.begin(), salary.end());
        int MN = *max_element(salary.begin(), salary.end());

        for (int i = 0; i < salary.size(); i++)
        {
            if (salary[i] != MX && salary[i] != MN)
            {
                sum += salary[i];
                c++;
            }
        }
        return sum / c;
    }
};
