#include <bits/stdc++.h>
using namespace std;
// 1. Using Reminder-divident method:-

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n==0) 
        return false;

        while(n%2==0) 
        n/=2;

        return n==1;
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)

// 2. Using Reminder-divident method via Recursion:-

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n==0) 
        return false;

        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
    }
};

// Time Complexity : O(logn)
// Space Complexity : O(logn) [Recursive stack is counted]

// 3. Bit manipulation :-

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n<=0) 
        return false;

        return ((n&(n-1))==0);
    }
};

// Time Complexity : O(1)
// Space Complexity : O(1)

// 4. Using ceil-floor method

class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        if(n <= 0) 
        return false;

        return ceil(log2(n)) == floor(log2(n));
    }
};

// Time Complexity : O(logn)
// Space Complexity : O(1)

