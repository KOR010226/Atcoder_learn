#include <bits/stdc++.h>
using namespace std;
#define M 200050

int main(){
    int N;
    cin >> N;
    vector<long long> a(N), b(N);

    long long cnt = 0, ans = 0;

    for(int i = 0;i < N; i ++){
        cin >> a[i] >> b[i];
        cnt += a[i];
    }

    for(int i = 0 ;i < N; i ++){
        ans = max(ans, cnt + (b[i] - a[i]));
    }
    cout << ans << endl;
    return 0;
}

// 思路 : 把所有 a[i] 加總，最後找 b[i] 和 a[i] 的差最大的
