#include <bits/stdc++.h>
using namespace std;
vector<vector<int> >anagrams(vector<string> v) 
{
	vector<string> ans = v;
	unordered_map<string, vector<int>> mp;
	vector<vector<int>> finalAns;
 
	for(int i=0; i<v.size(); i++){
    	string str = v[i];
    	sort(str.begin(), str.end());
    	mp[str].push_back(i+1);
	}
 
	for(auto it: mp){
    	vector<int> temp = it.second;
    	finalAns.push_back(temp);
	}
 
	sort(finalAns.begin(), finalAns.end());
	return finalAns;
}
 
int main()
{
	int n;
	cin >> n;
	vector<string> v;
	for(int i=0; i<n; i++)
	{
    	string s;
    	cin >> s;
    	v.push_back(s);
	}
	vector<vector<int>> m=anagrams(v);
	int i,j;
	for (i = 0; i < m.size(); i++) {
    	cout << "[";
    	for (j=0; j < m[i].size()-1; j++)
        	cout << m[i][j] << ",";
    	cout << m[i][j] << "]" << endl;
	}
	return 0;
}