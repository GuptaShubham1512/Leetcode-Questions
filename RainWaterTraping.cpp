#include<iostream>

using namespace std;
#include<vector>

int trap(vector<int>& height) {
        int n=height.size(), water=0;
        int leftmax=0, rightmax=0, maxheight=height[0],index=0;

        //MaxHeightbuilding
        for(int i=1; i<n; i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;

            }
            
        }
        //leftpart
        for(int i=0; i<index; i++){
            if(leftmax>height[i])
                water+=leftmax-height[i];
                else
                leftmax=height[i];
            
        }
        //rightpart
         for(int i=n-1; i>index; i--){
            if(rightmax>height[i])
                water+=rightmax-height[i];
                else
                rightmax=height[i];
            
        }return water;
      
        
    
        
    
};