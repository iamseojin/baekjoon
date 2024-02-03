#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
#define fastio cin.tie(0); ios_base::sync_with_stdio(0);

int main()
{
	fastio;
	int N;
	cin >> N;
	int cnt = 0;
	while (N--)
	{
		string s;
		stack<char> st;
		bool err = true;
		cin >> s;
		for (auto i : s)
		{
			if (st.empty()) st.push(i);
			else if (i == st.top())
			{
				st.pop();
			}
			else
			{
				st.push(i);
			}
		}
		if (st.empty()) cnt++;
	}
	cout << cnt;
}
