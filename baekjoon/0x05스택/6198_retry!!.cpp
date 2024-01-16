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

// 해결 아이디어 
// stack에는 왼쪽 건물 중, 현재 입력받은 건물을 볼 수 있는 건물들만 넣어놓기
// stack.size() == 현재 건물 볼 수 있는 건물들의 개수
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	long long ans = 0; // int 형 X
	int x;
	stack<int> st;
	while (N--)
	{
		cin >> x;
		while (!st.empty() && st.top() <= x)
		{
			st.pop();
		}
		ans += st.size();
		st.push(x);
	}
	cout << ans;
}
