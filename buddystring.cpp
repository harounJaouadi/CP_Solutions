#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        if (s.length() != goal.length())
        {
            return false;
        }
        string s1 = s, goal1 = goal;
        sort(s1.begin(), s1.end());
        sort(goal1.begin(), goal1.end());
        if (s == goal)
        {
            for (int i = 0; i < s1.length() - 1; i++)
            {
                if (s1[i] == s1[i + 1])
                {
                    return true;
                }
            };
            // cout<<"good"<<endl  ;
            return false;
        }
        else
        {

            int num = 0;
            int i = 0;
            stack<int> myStack;
            bool result = false;
            while (i < goal.length())
            {
                if (goal[i] != s[i])
                {

                    num++;
                    if (num == 2)
                    {
                        if (myStack.top() == goal[i])
                        {
                            myStack.pop();

                            if (myStack.top() == s[i])
                            {
                                result = true;
                            }
                            else
                            {

                                return false;
                            }
                        }
                        else
                        {

                            return false;
                        }
                    };
                    if (num < 2)
                    {

                        myStack.push(goal[i]);
                        myStack.push(s[i]);
                    }
                };
                i++;
            }
            if (num > 2)
            {
                return false;
            }
            else
            {
                // cout<<"test" ;

                return result;
            }
        };
    }
};

int main()
{
    Solution sol;
    cout << sol.buddyStrings("ab", "ba");
}