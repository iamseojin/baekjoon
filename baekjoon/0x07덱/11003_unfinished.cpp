#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <deque>
#include <cstring>
#include <cmath>
using namespace std;
#define fastio cin.tie(0); ios_base::sync_with_stdio(0);

int main()
{
	fastio;
	int N, L;
	cin >> N >> L;
	int x;
	deque<pair<int, int>> dq;
	queue<int> d;
	int idx = 0, s = 0, min;
	for (int i = 0; i < N; i++)
	{
		cin >> x; 
		if (x == 0)
		{
			min = x; dq.push_back({ x, i });
		}
		s = (i - L + 1 < 0 ? 0 : i - L + 1);
		if (idx < s)
		{
			dq.pop_front();
			if (dq.front().first => x)
			{
				dq.push_front({ x, i });
			}
			else if (dq.front().first <= x && dq.back().first > x)
			{
				int num = dq.back().first;
				int index = dq.back().second;
				dq.pop_back();
				dq.push_back({ x, i });
				dq.push_back({ num, index });
			}
			else
			{
				dq.push_back({ x, i });
			}
		}
		else
		{

		}
	}
}
