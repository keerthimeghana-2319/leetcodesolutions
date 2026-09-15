class Solution {
public:
    bool isValid(string s) {
        stack<char>res;
        if(s == "[" || s == "]" || s == "(" || s == ")" || s == "{" || s == "}")
        {
            return false;
        }
        for(char k : s)
        {
            if(k == '['|| k == '(' || k == '{')
            {
                res.push(k);
            }
            else
            {
                if(res.empty()) return false;
                int top = res.top();
                res.pop();
                if(k == ']' && top != '[' || k == ')' && top != '(' || k == '}' && top != '{')
                {
                    return false;
                }
            }
        }
        return res.empty();
    }
};