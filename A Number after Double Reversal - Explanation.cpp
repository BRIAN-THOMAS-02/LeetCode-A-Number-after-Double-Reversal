A Number after Double Reversal - "https://leetcode.com/problems/a-number-after-a-double-reversal/"
Explanation

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool isSameAfterReversals(int num)
    {
        int target = num;
        int i = 0, r, sum=0, x;
        int result = 0;
        int result1 = 0;
        string s = to_string(num); 
        int n = s.size();
        
        vector<int> vect_1;
        vector<int> vect_2;
        
        cout<<"\ns : "<<s<<"  |   s.size() : "<<s.size();
        
        for (int i=0; i<n; i++)
        {
            vect_1.push_back(num % 10);
            cout<<"\n\nx("<<num<<") % 10 : "<<num % 10;
            
            num = num / 10;
            cout<<"\nx("<<num<<") / 10 : "<<num;
        }
        
        cout<<"\n\n\nvect_1 : ";
        for (int j=0; j<vect_1.size(); j++)
            cout<<vect_1[j]<<" ";
        
        for (auto d : vect_1)  
        {
            result1 = result1 * 10 + d;
        }
        
        cout<<"\nresult1 : "<<result1<<" |  data type : "<<typeid(result1).name();
        string s1 = to_string(result1); 
        int n1 = s1.size();
        cout<<"\ns1.size() : "<<n1<<"\n";
        
        
        
        for (int t=0; t<n1; t++)
        {
            vect_2.push_back(result1 % 10);
            cout<<"\n\nx("<<result1<<") % 10 : "<<result1 % 10;
            result1 = result1 / 10;
            cout<<"\nx("<<result1<<") / 10 : "<<result1;
        }
            
        cout<<"\n\n\nvect_2 : ";
        for (int f=0; f<vect_1.size(); f++)
            cout<<vect_2[f]<<" ";
        
        for (auto e : vect_2)  
        {
            result = result * 10 + e;
        }
        
        cout<<"\nresult : "<<result<<" |    data type : "<<typeid(result1).name();;
        
        cout<<"\ntarget : "<<target<<"\n\n";
        if (result == target)
        {
            //cout<<"\n\ntrue";
            return true;
        }
        else
        {
            //cout<<"\n\nfalse";
            return false;
        }
    }
};


int main()
{
    Solution obj;
    //obj.isSameAfterReversals(12345600);
    cout<<obj.isSameAfterReversals(526123);
}
