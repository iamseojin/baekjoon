// 메모장에서 일어나는 편집(with 커서)를 연결리스트로 풀기!
// list STL 이용해서 푸는 법도 있지만, stack 으로 푸는 게 더 빠르다!

//#include <bits/stdc++.h>
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

int main(void) 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> L;
    string s;
    cin >> s;
    for (auto i : s)
    {
        L.push_back(i);
    }
    int M;
    cin >> M;
    char order, ch;
    list<char>::iterator cur = L.end(); // auto cur =
    for (int j = 0; j < M; j++)
    {
        cin >> order;
        if (order == 'L')
        {
            if (cur != L.begin()) cur--;
        }
        else if (order == 'D')
        {
            if (cur != L.end()) cur++;
        }
        else if (order == 'B')
        {
            if (cur != L.begin())
            {
                cur--;
                cur = L.erase(cur);
            }
        }
        else if (order == 'P')
        {
            cin >> ch;
            L.insert(cur, ch);
        }
    }
    for (auto t : L)
    {
        cout << t;
    }
}

//#include<iostream>
//#include<stack>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	string s = "";
//	stack<char>left, right;
//	cin >> s;
//	for (int i = 0; i < (int)s.size(); i++) {
//		left.push(s[i]);
//	}
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		char d;
//		cin >> d;
//		if (d == 'L') {
//			if (!left.empty()) {
//				right.push(left.top());
//				left.pop();
//			}
//		}
//		else if (d == 'D') {
//			if (!right.empty()) {
//				left.push(right.top());
//				right.pop();
//			}
//		}
//		else if (d == 'B') {
//			if (!left.empty()) {
//				left.pop();
//			}
//		}
//		else if (d == 'P') {
//			char a;
//			cin >> a;
//			left.push(a);
//		}
//	}
//	while (!left.empty()) {
//		right.push(left.top());
//		left.pop();
//	}
//	while (!right.empty()) {
//		cout << right.top();
//		right.pop();
//	}
//	cout << endl;
//}
