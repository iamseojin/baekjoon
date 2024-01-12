//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int cnt[10];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int A, B, C;
	cin >> A >> B >> C;

	int res = A * B * C;
	while (res)
	{
		cnt[res % 10]++;
		res /= 10;
	}

	for (int e : cnt)
	{
		cout << e << '\n';
	}
}
