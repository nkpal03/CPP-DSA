// Leetcode problem link https://leetcode.com/problems/powx-n/

// this question is done by me in 0ms by using recursion.
#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
         if(x==1){
            return 1;
        }
        if(n==0){
            return 1;
        }
        if(n<0){
            n=abs(n);
            return 1/(x*myPow(x,n-1));
        }
        else if(n%2==0){
            double ans = myPow(x,n/2);
                return ans*ans;
        }
        else
       return x*myPow(x,n-1);
        
    }
    

       
    
};