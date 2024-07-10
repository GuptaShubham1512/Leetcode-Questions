#include<iostream>

using namespace std;
#include<vector>

int maxSubArray(vector<int>& nums) {
        int curSum=0;
        int maxSum=nums[0];
        for(int i=0; i<nums.size(); i++){
            curSum = curSum + nums[i];

            if(curSum>maxSum){
                maxSum=curSum;
            }
            if(curSum<0){
                curSum=0;
            }

        }return maxSum;

        
    }




