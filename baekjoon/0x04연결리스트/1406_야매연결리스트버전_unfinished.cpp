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

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused;

void insert(int addr, char num) {
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    string s;
    cin >> s;
    int i = 0;
    for (auto item : s)
    {
        insert(i++, item);
    }
    int M;
    cin >> M;
    char order, ch;
    int cur = s.length();
    int N = s.length();
    unused = s.length();
    for (int j = 0; j < M; j++)
    {
        cin >> order;
        if (order == 'L')
        {
            if (cur) cur--;
        }
        else if (order == 'D')
        {
            if (cur < N) cur++;
        }
        else if (order == 'B')
        {
            if (cur)
            {
                cur--;
                erase(cur);
            }
        }
        else if (order == 'P')
        {
            cin >> ch;
            insert(--cur, ch);
        }
        unused = cur;
    }
    traverse();
}
