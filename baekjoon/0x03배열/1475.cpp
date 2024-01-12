//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm> // std::max_element를 사용하기 위한 헤더
#include <iterator>  // std::begin, std::end를 사용하기 위한 헤더
using namespace std;

int arr[9];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int roomNum;
	cin >> roomNum;

	int num, cnt=0;
	while (roomNum)
	{
		num = roomNum % 10;
		if (num == 9|| num==6) cnt++;
		else arr[num]++;
		roomNum /= 10;
	}
	cnt = cnt % 2 + cnt / 2;	// 9999999(9가 7개면 3으로 계산돼서 int/2)
	int* maxCnt = max_element(begin(arr), end(arr));
	cout << max(cnt, *maxCnt);
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N, a[10] = {}, ans = 0;
//	cin >> N;
//
//	// 자리수 추출
//	while (N) {
//		a[N % 10]++;
//		N /= 10;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (i == 6 || i == 9) continue;
//		ans = max(ans, a[i]);
//	}
//	// (a[6]+a[9])/2를 올림한 값이 6, 9에 대한 필요한 세트의 수이므로 (a[6]+a[9]+1)/2을 계산
//	ans = max(ans, (a[6] + a[9] + 1) / 2);
//	cout << ans;
//}
