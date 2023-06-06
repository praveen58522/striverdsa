class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int j=-5,small=0;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                j=i-1;
                break;
            }
        }
        if(j==-5)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            sort(nums.begin()+j+1,nums.end());
            cout<<j;
            for(int i=j+1;i<=nums.size();i++)
            {
                if(nums[i]>nums[j])
                {
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
    }
};
