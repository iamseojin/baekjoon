//!!!
//함수 인자로 int arr[]하면 왜 오류가 나고, vector<int> arr로 하면 작동 되지,,?

#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N)
{
	int num[101] = { 0 };
	for (auto e : arr)
	{
		if (num[100 - e] > 0) return 1;
		num[e]++;
	}
	return 0;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cout << func2({ 1, 52, 48 }, 3) << '\n';
	cout << func2({ 50,42 }, 2) << '\n';
	cout << func2({ 4,13,63,87 }, 4) << '\n';
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int func2(int arr[], int N)
//{
//	int num[101] = { 0 };
//	for (auto e : arr)
//	{
//		if (num[100 - e] > 0) return 1;
//		num[e]++;
//	}
//	return 0;
//}
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cout << func2({ 1, 52, 48 }, 3) << '\n';
//	cout << func2({ 50,42 }, 2) << '\n';
//	cout << func2({ 4,13,63,87 }, 4) << '\n';
//}
