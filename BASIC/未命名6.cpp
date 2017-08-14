#include<cstdio>
#define N 1000005
int n,m,t,pri[N],que[N],cnt[N],ans[64],tot=1,mor;
void calc(int lim,int flg){
    for(int i=2;i<=lim;++i)
        for(int num=i;num!=1;)
            cnt[pri[num]]+=flg,num/=pri[num];
}
main(){
    scanf("%d%d",&n,&m);
    if(n<m)n^=m^=n^=m;
    for(int i=2;i<=n;++i){
        if(!pri[i])que[++t]=pri[i]=i;
        for(int j=1;j<=t&&i*que[j]<=n;++j){
            pri[que[j]*i]=que[j];
            if(!(i%que[j]))break;
        }
    }
    ans[1]=1;
    calc(n,+1);
    calc(m,-1);
    calc(n-m,-1);
    for(int i=1;i<=t;++i)
        for(int j=1;j<=cnt[que[i]];++j){tot+=7;
            for(int k=1;k<=tot;++k)ans[k]*=que[i];
            for(int k=1;k<=tot;++k)ans[k+1]+=ans[k]/10,ans[k]%=10;
            while(tot&&!ans[tot])--tot;if(tot>50)tot=50;
        }
    while(tot&&!ans[tot])--tot;
    for(int i=tot;i;--i)putchar('0'+ans[i]);
}
