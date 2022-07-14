A Number After a Double Reversal - "https://leetcode.com/problems/a-number-after-a-double-reversal/"
SUBMISSION

class Solution 
{
public:
    bool isSameAfterReversals(int num)
    {
        int target = num;
        int i = 0, r, sum=0, x;
        int result1 = 0;
        int result = 0;
        string s = to_string(num); 
        int n = s.size();
        
        vector<int> vect_1;
        vector<int> vect_2;
        
        for (int i=0; i<n; i++)
        {
            vect_1.push_back(num % 10);
            num = num / 10;
        }
        
        for (auto d : vect_1)  
            result1 = result1 * 10 + d;
        
        string s1 = to_string(result1); 
        int n1 = s1.size();
        for (int t=0; t<n1; t++)
        {
            vect_2.push_back(result1 % 10);
            result1 = result1 / 10;
        }
            
        for (auto e : vect_2)  
            result = result * 10 + e;
    
        if (result == target)
            return true;
        else
            return false;   
    }
};




