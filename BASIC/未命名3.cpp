#include<iostream>
#include<cstring>
#include<cstdio>
#define N 1000010
#define M 101
using namespace std;
int n,m,num,f[N],c[N],p[N],prime[N];
int a1[M],b1[M],c1[N];
struct node{
    node()
    {
        memset(q,0,sizeof q );len=0;
    }
    int q[M],len;
};node ans;
void prepare()
{
    for(int i=2;i<=n;i++)
    {
        if(!f[i])
        {
            prime[++num]=i;p[i]=num;
            for(int j=2;i*j<=m;j++)
              f[i*j]=1;
        }
    }
}
void work1(int x)
{
    for(int i=1;i<=num;i++)
    {
        while(x%prime[i]==0) c[i]++,x/=prime[i];
        if(!f[x]){ c[p[x]]++;break; }
        if(x==1) break;
    }
}
void work2(int x)
{
    for(int i=1;i<=num;i++)
    {
        while(x%prime[i]==0) c[i]--,x%=prime[i];
        if(!f[x]){ c[p[x]]--;break; }
        if(x==1) break;
    }
}
node cheng(node a,int b)
{
    memset(a1,0,sizeof a1 );
    memset(b1,0,sizeof b1 );
    node c;
    int len=a.len;
    for(int i=1;i<=a.len;i++) a1[i]=a.q[len-i]+1;
    for(int i=1;i<=len;i++)
    {
        b1[i]+=a1[i]*b;
        b1[i+1]+=b1[i]/10;
        b1[i]%=10;
    }
    if(b1[len+1]) len++;
    c.len=min(50,len);
    for(int i=1;i<=c.len;i++)
      c.q[i]=b1[c.len-i+1];
    return c;
}
int main()
{
    scanf("%d%d",&n,&m);
    if(n>m) swap(n,m);
    prepare();
    for(int i=m;i>=m-n+1;i--)
      work1(i);
    for(int i=1;i<=n;i++)
      work2(i);
    ans.len=1;ans.q[1]=1;
    for(int i=1;i<=num;i++)
      for(int j=1;j<=c[i];j++)
        ans=cheng(ans,prime[i]);
    for(int i=max(1,ans.len-49);i<=ans.len;i++)
      printf("%d",ans.q[i]);
    
    
    
    return 0;
}
