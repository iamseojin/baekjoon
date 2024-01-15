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
	stack<int> front, end;
	list<char> ans;
	int x;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int idxF = 0;
	for (int i = 1; i <= N; i++)
	{
		end.push(i);
		ans.push_back('+');
		int num = i;
		while (arr[idxF] == num)
		{
			idxF++;
			front.push(num);
			end.pop();
			ans.push_back('-');
			if (idxF >= N || end.empty()) break;
			num = end.top();
		}
	}
	if (!end.empty()) cout << "NO";
	else
	{
		while(!ans.empty())
		{
			cout << ans.front() << '\n';
			ans.pop_front();
		}
	}
}
