#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    static int lengthOfLongestSubstring(string s)
    {
        map<char, int> myMap;
        int initial = 0, end = 0, max_val = 0;
        while (end < s.length())
        {
            auto it = myMap.find(s[end]);
            if (it != myMap.end())
            {
                // element  found
                if (myMap[s[end]] >= initial)
                {

                    initial = myMap[s[end]] + 1;
                }else {
                    max_val = max(max_val, end - initial + 1);
                }
                myMap[s[end]] = end;
            }
            else
            {
                // element not found

                myMap.insert(make_pair(s[end], end));
                max_val = max(max_val, end - initial + 1);
            }
            end++;
        }
        return max_val;
    }
}; // aabacda  //dvdf//tmmzuxt
// end =2   // end=3
// initial=0//initial=2
// --
//t0 m2 z3 

int main()
{
    cout << Solution::lengthOfLongestSubstring("tmmzuxt");
}