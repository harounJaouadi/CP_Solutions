#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int target;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int recent = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 || nums[i] != nums[i - 1])
            {

                target = -nums[i];
                int begin = 0, end = nums.size() - 1;
                // -1/-1/0/1/2/3/4
                int sum = nums[end] + nums[begin];
                while (begin < end && sum != target)
                {
                    if (begin == i)
                    {
                        begin++;
                    }
                    else if (end == i)
                    {
                        end--;
                    }
                    else
                    {
                        if (sum < target)
                        {
                            begin++;
                            sum = nums[end] + nums[begin];
                        }
                        else
                        {
                            end--;
                            sum = nums[end] + nums[begin];
                        }
                    }
                }
                if (sum == target)
                {
                    vector<int> sol;
                    sol.push_back(-target);
                    sol.push_back(nums[begin]);
                    sol.push_back(nums[end]);
                    result.push_back(sol);
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> myVector = {-4, -1, -1, 0, 1, 2};
    // for (int j = 0; j < myVector.size(); j++)
    // {
    //     cout << myVector[j] << " ";
    // }
    vector<vector<int>> res = solution.threeSum(myVector);
    for (int i = 0; i < res.size(); i++)
    {

        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << " " << endl;
    }
}
