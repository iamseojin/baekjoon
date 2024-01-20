#include <bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	string order;
	int x;
	deque<int> Dq;
	while (N--)
	{
		cin >> order;
		if (order == "push_front")
		{
			cin >> x;
			Dq.push_front(x);
		}
		else if(order == "push_back")
		{
			cin >> x;
			Dq.push_back(x);
		}
		else if (order == "pop_front")
		{
			if (Dq.empty())
			{
				cout << -1 << '\n'; continue;
			}
			cout << Dq.front() << '\n';
			Dq.pop_front();
		}
		else if (order == "pop_back")
		{
			if (Dq.empty())
			{
				cout << -1 << '\n'; continue;
			}
			cout << Dq.back() << '\n';
			Dq.pop_back();
		}
		else if (order == "size")
		{
			cout << Dq.size() << '\n';
		}
		else if (order == "empty")
		{
			cout << (Dq.empty() ? 1 : 0) << '\n';
		}
		else if (order == "front")
		{
			cout << (Dq.empty() ? -1 : Dq.front()) << '\n';
		}
		else if (order == "back")
		{
			cout << (Dq.empty() ? -1 : Dq.back()) << '\n';
		}
	}
}
