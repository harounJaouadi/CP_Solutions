#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {   
        int min=prices[0]; 
        int profit=0 ; 
        for(int i=0; i<prices.size() ; i++){
            if(prices[i]<min){
                min=prices[i] ; 
            }else{
                if(profit<prices[i]-min){
                    profit=prices[i]-min;
                }
            }
        }
        return profit ; 
    } ; 
} ;


int main(){
    vector<int> numbers = {7,3,8,1,4}  ;
    Solution solution ; 
    cout<<solution.maxProfit(numbers) ; 
}

//7,3,8,1,4
//1,3,4,7,8