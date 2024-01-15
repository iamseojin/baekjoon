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

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;
    queue<int> Que;
    cout << '<';
    for (int i = 0; i < N; i++)
    {
        Que.push(i + 1);
    }
    while (!Que.empty())
    {
        if (Que.size() == 1)
        {
            cout << Que.front() << ">\n";
            Que.pop(); break;
        }
        for (int i = 0; i < K-1; i++)
        {
            Que.push(Que.front());
            Que.pop();
        }
        cout << Que.front() << ", ";
        Que.pop();
    }

}
