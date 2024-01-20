
// 야매 배열로 구현 (시간은 빠르나, 공간복잡도가 너무 큼)
//const int mx = 50;
//int dq[2 * mx + 1];
//int head = mx, tail = mx;
//
//void push_front(int x) {
//	dq[--head] = x;
//}
//
//void push_back(int x) {
//	dq[tail++] = x;
//}
//
//void pop_front() {
//	head++;
//}
//
//void pop_back() {
//	tail--;
//}
//
//int front() {
//	return dq[head];
//}
//
//int back() {
//	return dq[tail - 1];
//}
//
//int left(int x)
//{
//	int idx = head;
//	int cnt = 0;
//	while (dq[idx] != x)
//	{
//		idx++;
//		cnt++;
//	}
//	return cnt;
//}
//
//int right(int x)
//{
//	int idx = tail-1;
//	int cnt = 1;
//	while (dq[idx] != x)
//	{
//		idx--;
//		cnt++;
//	}
//	return cnt;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, k;
//	cin >> n >> k;
//	int x;
//	int l, r;
//	int cnt = 0;
//	for (int i = 1; i <= n; i++) push_back(i);
//	while (k--)
//	{
//		cin >> x;
//		l = left(x); r = right(x);
//		if (l < r)
//		{
//			cnt += l;
//			while (l--)
//			{
//				push_back(front());
//				pop_front();
//			}
//		}
//		else
//		{
//			cnt += r;
//			while (r--)
//			{
//				push_front(back());
//				pop_back();
//			}
//		}
//		pop_front();
//	}
//	cout << cnt;
//}
