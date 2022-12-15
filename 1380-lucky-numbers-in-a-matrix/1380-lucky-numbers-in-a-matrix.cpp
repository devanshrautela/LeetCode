class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans,aa,bb;
        for(int i=0;i<matrix.size();i++){
            int a=INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                a=min(a,matrix[i][j]);
            }
            if(a!=INT_MAX) aa.push_back(a);
        }
        for(int i=0;i<matrix[0].size();i++){
            int b = INT_MIN;
            for(int j=0;j<matrix.size();j++){
                b=max(b,matrix[j][i]);
            }
            if(b!=INT_MIN) bb.push_back(b);
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(aa[i]==bb[j]) ans.push_back(aa[i]);
            }
        }
        return ans;
    }
};