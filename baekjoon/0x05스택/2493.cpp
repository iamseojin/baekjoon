#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	stack<int> st;
	stack<int> idx;
	int x;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		int f = 1;
		if (i==0)
		{
			cout << "0 ";
			st.push(x); idx.push(i+1); continue;
		}
		while (!st.empty())
		{
			if (st.top() > x)
			{
				cout << idx.top() << ' ';
				f = 0; break;
			}
			st.pop();
			idx.pop();
		}
		if (f) cout << "0 ";
		st.push(x); idx.push(i + 1);
	}
}
