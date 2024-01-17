// 답은 맞지만 시간복잡도 O(N^2),  N<=1,000,000 이므로 시간초과
// NlogN으로 풀어야댐 ,,

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
	int x;
	stack<pair<int, int>> st;
	vector<int> arr;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		st.push({ x, i });
		arr.push_back(-1);
	}
	int nge = st.top().first;
	st.pop();
	while (!st.empty())
	{
		int num = st.top().first;
		if (num < nge)
		{
			arr[st.top().second] = nge;
		}
		else
		{
			int idx = st.top().second + 1;
			while (num >= arr[idx] && idx < N)
			{
				idx++;
			}
			if (idx<N && num < arr[idx])
				arr[st.top().second] = arr[idx];
		}
		nge = num;
		st.pop();
	}

	for (auto a: arr)
	{
		cout << a << ' ';
	}
}
