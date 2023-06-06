class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) c0++;
            if(nums[i]==1) c1++;
            if(nums[i]==2) c2++;
        }
        
        
        for(int i=0;i<c0;i++)
        {
            nums[i]=0;
        }
        for(int i=0;i<c1;i++)
        {
            nums[i+c0]=1;
        }
        for(int i=0;i<c2;i++)
        {
            nums[i+c0+c1]=2;
        }
        
    }
};
