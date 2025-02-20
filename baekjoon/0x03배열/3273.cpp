//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cstring>
#include <cmath>
using namespace std;

int n, ret, x;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> x;
	sort(a.begin(), a.end());
	int l = 0, r = n - 1;
	while (l < r)
	{
		if (a[l] + a[r] == x)r--, ret++;
		else if (a[l] + a[r] > x)r--;
		else if (a[l] + a[r] < x)l++;
	}
	cout << ret << "\n";
}
