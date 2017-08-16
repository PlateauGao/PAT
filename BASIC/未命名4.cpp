#include<cstring>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#define N 1000005
using namespace std;
int mn[N],pri[N/5],cnt[N];
int n,m,tot;
struct bignum{
    int a[55];
    bignum(){
        memset(a,0,sizeof(a));
    }
    int& operator [](int x){
        return a[x];
    }
    bignum operator *(int b)const{
        bignum c;
        for (int i=1;i<=50;i++){
            c[i]+=a[i]*b;
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
        return c;
    }
    void print(){
        int len=50;
        while (!a[len]&&len) len--;
        for (;len>=1;len--) printf("%d",a[len]);
        printf("\n");
    }
};
void pre(){
    for (int i=2;i<=n;i++){
        if (!mn[i]) mn[i]=i,pri[++tot]=i;
        for (int j=1;j<=tot&&i*pri[j]<=n;j++){
            mn[i*pri[j]]=pri[j];
            if (i%pri[j]==0) break;
        }
    }
}
inline void change(int x,int y){
    while (x!=1){
        cnt[mn[x]]+=y;
        x/=mn[x];
    }
}
int main(){
    scanf("%d%d",&n,&m);
    if (n<m) swap(n,m);
    pre();
    for (int i=1;i<=n-m;i++) change(i,-1);
    for (int i=m+1;i<=n;i++) change(i,1);
    bignum ans;
    ans[1]=1;
    for (int i=2;i<=n;i++)
        for (;cnt[i];cnt[i]--)
            ans=ans*i;
    ans.print();
} 
