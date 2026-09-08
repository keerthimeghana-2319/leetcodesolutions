class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n2 = s2.size();
        int n1 = s1.size();
        reverse(s1.begin(),s1.end());
        int l = 0;
        int r = l+n1;
        string temp = "";
        for(int i = l ; i < r ; i++)
        {
            temp += s2[i];
        }
        string 
        if(temp == s1)
        {
            return true;
        }
        for(int j = r ; j < n2 ; j++)
        {
            temp.erase(0, 1);
            l++;
            temp += s2[r];
            r++;
            if(temp == s1)
            {
                return true;
            }
        }
        return false;
    }
};