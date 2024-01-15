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
	int K;
	cin >> K;
	stack<int> st;
	int x;
	while (K--)
	{
		cin >> x;
		if (x == 0 && !st.empty())
		{
			st.pop();
		}
		else st.push(x);
	}
	int sum = 0;
  // empty 확인보다 stack.size()변수 할당해놓고 for문 돌리는게 더 빠름
    /*int size = st.size();
	  int sum = 0;
	  for (int i = 0; i < size; i++)
	  {
		  sum += st.top();
      st.pop();
	  }*/
	while (!st.empty())
	{
		sum += st.top();
		st.pop();
	}
	cout << sum;
}
