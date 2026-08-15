#include<iostream>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int large =0;
        int Secondlarge =0;
        for (int i:nums){
            if (i>large){
                Secondlarge = large;
                large =i;
            }
            else if(i>Secondlarge){
                Secondlarge = i;
            }
        }
        return (large-1)*(Secondlarge-1);
    }
};