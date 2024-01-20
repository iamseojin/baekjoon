#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	string order;
	int ch;
	queue<int> Q;
	while (N--)
	{
		cin >> order;
		if (order == "push")
		{
			cin >> ch;
			Q.push(ch);
		}
		else if (order == "pop")
		{
			if (Q.empty())
			{
				cout << -1 << '\n'; continue;
			}
			cout << Q.front() << '\n';
			Q.pop();
		}
		else if (order == "size")
		{
			cout << Q.size() << '\n';
		}
		else if (order == "empty")
		{
			if (Q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (order == "front")
		{
      // cout << (q.empty() ? -1 : q.front()) << '\n';
      
			if (Q.empty())
			{
				cout << -1 << '\n'; continue;
			}
			cout << Q.front() << '\n';
		}
		else if (order == "back")
		{
			if (Q.empty())
			{
				cout << -1 << '\n'; continue;
			}
			cout << Q.back() << '\n';
		}
	}
}
