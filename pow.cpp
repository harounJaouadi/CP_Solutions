#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        int calc=n ;
        if(n==-2147483648){
            calc++ ; 
        }
        double res=1 ; 
        for(int i=0;i<abs(calc) ; i++){
            if(n>=0)
            res=res*x ; 
            if(n<0)
            res=res*(1/x) ;
        } ; 
        if(n!=calc){
            return res*(1/x) ;
        }
        return res ; 
    }
};

int main()
{
    Solution sol ; 
    cout << std::fixed << std::setprecision(5) ;
    cout<<sol.myPow(2.00000,-2147483648) ; 
}