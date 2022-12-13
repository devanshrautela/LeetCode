class Solution {
public:
    int numUniqueEmails(vector<string>& arr) 
    {
        unordered_map<string,int>mp;
        
        for(int i=0;i<arr.size();i++)
        {
            string str = arr[i];
            string s ="";
            
            int pos = str.find('@');
            string temp1 = str.substr(0,pos);
            string temp2 = str.substr(pos,str.length());
            
            int idx = 0;
            while(idx < temp1.length())
            {
                if(temp1[idx]=='+')
                {
                    break;	
                }
                else if(temp1[idx]=='.')
                {
                    idx++;
                }
                else 
                {
                    s.push_back(temp1[idx]);
                    idx++;
                }
            }   
            mp[s+temp2]++;
        }
        return mp.size();
    }
};