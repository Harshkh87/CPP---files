#include <bits/stdc++.h>
using namespace std;

//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) 
    {
        int res=0,sign,i=0;
        char ch;
        
        sign=1;
        
        if(str[0]=='-')
        {
            sign=-1;
            i++;
        }
        
        while(str[i]!='\0')
        {
            if(str[i]-'0'>=0 && str[i]-'0'<=9)
            {
                res= res*10 + str[i]-'0';
            }
            else
            return -1;
            
            i++;
        }
        
        return sign*res;
    }
};