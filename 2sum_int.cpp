#include <bits/stdc++.h>

using namespace std; 

class Solution{
    public : 
        vector<int> twoSum(vector<int>& nums, int target){
            map<int,int> map ;
            vector<int> result ;  
            for(int i=0 ; i<nums.size() ; i++){
                map[nums[i]]=i ;
            } ;
            int i=0 ; 

            while(i<nums.size()){
                if(map[target-nums[i]] && map[target-nums[i]]!=i){
                    vector<int> vect={i,map[target-nums[i]]};
                    return  vect; 
                }else{
                    i++ ; 
                }
            } 
            return nums ; 
            
        };  
} ;


int main(){
    Solution solution ;
    vector<int> v={2,11,15,7} ;  
    vector<int> vres=solution.twoSum(v,9) ;
    for(int i=0; i<vres.size();i++){
        cout<<vres[i] ; 
    } 
    map<int,int> map ; 
    return 1 ; 
}

