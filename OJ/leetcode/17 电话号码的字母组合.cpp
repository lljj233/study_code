//https://leetcode.cn/problems/letter-combinations-of-a-phone-number/submissions/

class Solution
{
    string strA[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
public:
    void Combine(string digits, int level, string combinestr, vector<string>& v)
    {
        if(level == digits.size())
        {
            v.push_back(combinestr);
            return;
        }
        int num = digits[level] - '0';
        string str = strA[num];
        for(size_t i = 0; i < str.size(); i++)
        {
            Combine(digits, level+1, combinestr+str[i], v);
        }
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> v;
        if(digits.empty())
            return v;
        Combine(digits, 0, "", v);
        return v;
    }
};

