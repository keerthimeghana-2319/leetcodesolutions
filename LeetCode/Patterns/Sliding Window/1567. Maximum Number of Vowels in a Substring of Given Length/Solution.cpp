class Solution {
public:
bool isVowel(char s)
{
    if(s == 'a' || s =='e' || s == 'i' || s == 'o' || s =='u')
    {
        return true;
    }
    return false;
}
    int maxVowels(string s, int k) {
        int maxsum = 0;
        int count = 0;
        for(int i = 0 ; i < k ; i++)
        {
            if(isVowel(s[i]))
            {
                count++;
            }
            maxsum = count;
        }
        for(int i = k ; i < s.size() ; i++)
        {
            if(isVowel(s[i])) count++;
            if(isVowel(s[i-k])) count--;
            maxsum = max(count,maxsum);
        }
        return maxsum;
    }
};