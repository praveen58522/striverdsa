class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++)
        {
            vector<int> ram;
            for(int j=0;j<=i;j++)
            {
                ram.push_back(1);
            }
            ans.push_back(ram);
        }
        if(numRows>2)
        {
            for(int i=2;i<numRows;i++)
            {
                for(int j=1;j<=(ans[i].size()-2);j++)
                {
                    ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                }
            }
        }
        return ans;
    }
};
