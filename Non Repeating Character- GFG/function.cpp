#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:

    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       char ch;
        unordered_map<char,int> m;
        int i,key,n;
        n=S.size();
        
        for(i=0;i<n;i++)
        m[S[i]]++;
        
        for(i=0;i<n;i++)
        {
            if(m[S[i]]==1)
            {
                ch=S[i];
                return ch;
            }
        }
        return '$';
    }

};

    int main()
    {
        int T;
        cin >> T;

        while(T--)
        {
            string S;
            cin >> S;
            Solution obj;
            char ans = obj.nonrepeatingCharacter(S);

            if(ans != '$')
            cout<<ans;
            else
            cout<<"-1";

            cout<<endl;
        }
        return 0;
    }