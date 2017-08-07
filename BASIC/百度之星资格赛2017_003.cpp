#include <iostream>  
#include <algorithm>  
#include <vector>  
#include <string.h>  
using namespace std;  
const int INF = 0x3f3f3f3f;  
struct Monster {  
    int a, b;  
}monster[100005];  
int dp[1005][15];  
int k[1005], p[1005];  
int n, m;  
void complete_packet(int k, int p) {  
    for (int b = 0; b <= 10; ++b) {  
        if (b >= p) {  
            continue;  
        } else {  
            int d = p - b;  
            //血量小于攻击  
            for (int a = 1; a <= d; ++a) {  
                dp[a][b] = min(dp[a][b], k);  
            }  
            //血量大于攻击  
            for (int a = d + 1; a <= 1000; ++a) {  
                dp[a][b] = min(dp[a][b], dp[a - d][b] + k);  
            }  
         }  
    }  
}  
int main() {  
       
    int max_b;  
    while (~scanf("%d%d", &n, &m)) {  
        max_b = -1;  
        for (int i = 0; i < n; ++i) {  
            scanf("%d%d", &monster[i].a, &monster[i].b);  
            max_b = max(monster[i].b, max_b);  
        }  
        int flag = 0;  
        for (int i = 0; i < m; ++i) {  
            scanf("%d%d", &k[i], &p[i]);  
            if (p[i] > max_b) {  
                flag = 1;  
            }  
        }  
        if (!flag) {  
            printf("-1\n");  
            continue;  
        }  
          
        for (int i = 0; i <= 1000; ++i) {  
            for (int j = 0; j <= 10; ++j) {  
                if (i == 0) {  
                    dp[i][j] = 0;  
                } else {  
                    dp[i][j] = INF;  
                }  
            }  
        }  
          
        long long ans = 0;  
          
        for (int i = 0; i < m; ++i) {  
            complete_packet(k[i], p[i]);  
        }  
          
        for (int i = 0; i < n; ++i) {  
            ans += dp[monster[i].a][monster[i].b];  
        }  
          
        printf("%lld\n", ans);  
    }  
}  
