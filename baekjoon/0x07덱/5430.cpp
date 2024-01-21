/*
  입출력이 잘 나왔고, 코드 구현도 잘했다고 생각했으나 제출하면 자꾸 틀렸다고 나옴
  트러블슈팅 1) 입출력 2번쨰에서 42 사이에 ,가 없는게 이해가 안갔음(오타인가도생각함..)
  근데 4와 2가 아닌 42였음..ㅎㅎ 바보니?
  -> 처음에 auto로 string으로 [42] 요소 훑는 과정에서 42를 4와 2가 아닌 42로 구별하는 코드구현 필요했음
  DD
  1
  [42]
  트러블슈팅 2) bool isError = false; 변수 추가
  2개 숫자 덱에넣고 DD 두번시 오류가 없는데, [배열] 출력 조건을 dq.empty()로 처리해서 
    []로 출력되어야하는데 아무것도 출력이 안된거였음
  -> 에러 발생 if (!isError)로 조건 변경
*/
// reverse(dq.begin(), dq.end()); 
// 이게 deque 뒤집는 stl 인듯

#include <bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;
#define fastio cin.tie(0); ios_base::sync_with_stdio(0);

int main()
{
	fastio;
	int T, N;
	cin >> T;
	while (T--)
	{
		string p, s;
		deque<int> dq;
		int top = 0;
		cin >> p;
		cin >> N;
		cin >> s;
		int num = 0;
		bool isError = false;
		for (int i = 1; i < (int)s.size() - 1; i++)
		{
			if (s[i] == ',')
			{
				dq.push_back(num); num = 0;
			}
			else
			{
				num *= 10; num += s[i] - '0';
				if (i == (int)s.size() - 2) dq.push_back(num);
			}
		}
		for (auto a : p)
		{
			if (a == 'R')
			{
				if (top) top = 0;
				else top = 1;
				// top = 1-top;
			}
			else
			{
				if (dq.empty())
				{
					cout << "error" << '\n'; 
					isError = true; break;
				}

				if (top) dq.pop_back();
				else dq.pop_front();
			}
		}
		if (!isError)
		{
			cout << '[';
			if (top)
			{
				for (int i = (int)dq.size()-1; i >=0; i--)
				{
					cout << dq[i];
					if (i) cout << ',';
				}
			}
			else
			{
				for (int i = 0; i < (int)dq.size(); i++)
				{
					if (i) cout << ',';
					cout << dq[i];
				}
			}
			cout << ']' << '\n';
		}
	}
}
