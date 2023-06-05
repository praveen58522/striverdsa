class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        bool x=false, y=false;
        for(int i=0;i<v.size();i++)
        {
            if(v[i][0]==0)
            {
                x = true;
            }
        }
        for(int j=0;j<v[0].size();j++)
        {
            if(v[0][j]==0)
            {
                y = true;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]==0)
                {
                    v[0][j]=0;
                    v[i][0]=0;
                }
            }
        }
        for(int i=1;i<v[0].size();i++)
        {
            if(v[0][i]==0)
            {
                for(int j=0;j<v.size();j++)
                {
                    v[j][i]=0;
                }
            }
        }
        for(int i=1;i<v.size();i++)
        {
            if(v[i][0]==0)
            {
                for(int j=0;j<v[0].size();j++)
                {
                    v[i][j]=0;
                }
            }
        }
         if(x)
        {
            for(int i=0;i<v.size();i++)
            {
                v[i][0] = 0;
            }
        }
        if(y)
        {
            for(int j=0;j<v[0].size();j++)
            {
                v[0][j] = 0;
            }
        }
    }
};
