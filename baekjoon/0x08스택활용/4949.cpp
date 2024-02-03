#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
#define fastio cin.tie(0); ios_base::sync_with_stdio(0);

int main()
{
	fastio;
	while (true)
	{
		string s;
		stack<char> st;
		bool err = true;
		getline(cin, s);
		//cin >> s; 안됨
		// 공백 포함한 한 줄을 입력받아야 하므로
		if (s == ".") break;
		for (auto i : s)
		{
			if (i == '(' || i == '[')
			{
				st.push(i);
			}
			else if (i == ')')
			{
				if (st.empty())
				{
					err = false; break;
				}
				if (st.top() != '(')
				{
					err = false; break;
				}
				st.pop();
			}
			else if (i == ']')
			{
				if (st.empty())
				{
					err = false; break;
				}
				if (st.top() != '[')
				{
					err = false; break;
				}
				st.pop();
			}
		}
		if (!err || !st.empty()) cout << "no" << '\n';
		else cout << "yes" << '\n';
	}
}
