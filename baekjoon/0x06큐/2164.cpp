#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<int> Q;
	
	int N;
	cin >> N;
	for(int i=1; i<=N; i++)
	{
		Q.push(i);
	}
	while (Q.size() != 1)
	{
		Q.pop();
		if (Q.size() == 1) break;
		Q.push(Q.front());
		Q.pop();
	}
	cout << Q.front();
}

// 큐 STL 안쓰고 배열로 직접하는게 더 빠르네 
//#include <iostream>
//using namespace std;
//
//int q[1000000];
//int front = 0;
//int back = 0;
//void Push(int n) {
//	back = back + 1;
//	q[back] = n;
//}
//int Pop() {
//	front = front + 1;
//	return q[front];
//}
//
//int main(void) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		Push(i);
//	}
//	while (back - front > 1) {
//		Pop();
//		Push(Pop());
//	}
//	cout << q[back];
//	return 0;
//}
