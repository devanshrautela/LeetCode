class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
        int l = s.length();
        for(int i=0; i<l; i++){
            res[indices[i]]=s[i];
        }
        return res;
    }
};