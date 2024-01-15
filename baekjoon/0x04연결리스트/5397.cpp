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
    
    int N;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        list<char> L;
        auto cur = L.begin();
        for (auto ch : s)
        {
            if (ch == '<')
            {
                if (cur != L.begin()) cur--;
            }
            else if (ch == '>')
            {
                if (cur != L.end()) cur++;
            }
            else if (ch == '-')
            {
                if (cur!=L.begin()) cur = L.erase(--cur);
                //if (!L.empty() && cur!=L.begin()) cur = L.erase(--cur); 했었는데 출력초과
            }
            else
            {
                L.insert(cur, ch);
            }
        }
        for (auto a : L)
        {
            cout << a;
        }
        cout << '\n';
    }
}
