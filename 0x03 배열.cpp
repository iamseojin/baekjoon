#include <bits/stdc++.h>
using namespace std;

//int arr[26]; 전역에 선언시 0으로 초기화됨
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string word;
	int arr[26] = { 0 };
	//fill(arr, arr+26, 0);
	getline(cin, word);

	for (char item : word)
	{
		arr[item - 'a']++;
	}

	for (int i : arr)
	{
		cout << i << ' ';
	}
}
