#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int i = 0;
        multiset<char> charMultiset;
        if (s.length() != t.length())
        {
            return false;
        }
        for (int i = 0; i < s.length(); i++)
        {
            charMultiset.insert(s[i]);
        }
        for (int i = 0; i < s.length(); i++)
        {
            auto it = charMultiset.find(t[i]);
            if (it == charMultiset.end())
            {
                return false;
            }
            charMultiset.erase(it);
        }
        return charMultiset.empty(); 
    }
};

int main()
{
    Solution solution;
    solution.isAnagram("anagram", "nagaram");
}
