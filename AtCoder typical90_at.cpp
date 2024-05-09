
#include <bits/stdc++.h>
using namespace std;
#define N 100005
#define mod % 46
int main() 
{   
    int n;
    cin >> n;
    int A[N], B[N], C[N];
    int cnt_a[50], cnt_b[50], cnt_c[50];
    
    for(int i = 1 ;i <= n ;i ++) cin >> A[i];
    for(int i = 1 ;i <= n; i ++) cin >> B[i];
    for(int i = 1 ;i <= n; i ++) cin >> C[i];
    
    for(int i = 1 ;i <= n ;i ++){
      cnt_a[A[i] mod] ++;
      cnt_b[B[i] mod] ++;
      cnt_c[C[i] mod] ++;
    }
    // cnt[] 用來計算每個 array 中 < 46 的餘數
    
    int ans = 0;
    
    for(int x = 0; x < 46; x ++){
      for(int y = 0; y < 46; y ++){
        int z = (46 - (x + y) % 46) % 46;
        ans += cnt_a[x] * cnt_b[y] * cnt_c[z];
      }
    }
    // z = (46 - (x + y)) % 46，所以只要從 cnt_c[] 中拿出 z 就好
    cout << ans << endl;
    return 0;
}
