class Solution {
public:
    int minOperations(vector<string>& logs) {
            stack<string>stk;
    for(int i = 0 ; i <logs.size();i++)
    {
        string str = logs[i];
        if(str == "../")
        {
            if(!stk.empty())
            {
                stk.pop();
            }
        }
        else if(str != "./")
        {
            stk.push(str);
        }
    }
    return stk.size();
    }
};