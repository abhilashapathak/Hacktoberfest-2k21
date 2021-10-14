#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>>st;
vector<int> stockspan(vector<int>prices)
{
	vector<int>ans;
	for(auto price:prices)
	{
		int days=1;
		while(!st.empty()&&st.top().first<=price)
		{
			days+=st.top().second;
			st.pop();
		}
		st.push({price,days});
		ans.push_back(days);
	}
	return ans;
}
int main()
{
	vector<int>v={100,80,60,70,60,75,85};
	vector<int>res=stockspan(v);
	for(auto itr:res)
cout<<itr<<" ";
}
