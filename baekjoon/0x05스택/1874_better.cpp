#include <bits/stdc++.h>
using namespace std;

// 나는 배열 순서 숫자들 입력받아서 배열에 집어넣고, 배열의 순서와 맞는지 일일히 비교했는데,
// 배열에 안넣고 그때그때 숫자 입력받아서 확인하는 구현방식이 존재했다
// 이런 +- 연산 과정 문자열 필요할땐 string을 쓰자!
// 나는 아직 배열이 떠오르지만 동적의 불편함존재? -> 스트링!!
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> S;
    int cnt = 1;
    string ans;
    while (n--) 
    {
        int t;
        cin >> t;
        while (cnt <= t) 
        {
            S.push(cnt++);
            ans += "+\n";
        }
        if (S.top() != t) 
        {
            cout << "NO\n";
            return 0;
        }
        S.pop();
        ans += "-\n";
    }
    cout << ans;
}

/*
현재 처리를 필요로 하는 수는 cnt이다. cnt 이상인 값 t가 주어지면 그 값을 pop할 수 있게 cnt가 t가
될 때 까지 push를 해야 한다(18-21줄). 만약 22번째 줄과 같이 S.top()과 t가 일치하지 않는다면
올바르지 않은 수열이다.
*/
