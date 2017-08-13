#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n,m,a[maxn],num,c[maxm/10],prime[maxm/10];
void Prime(){
    for(int i=2;i<=n;i++){
        if(f[i]==0)prime[++num]=i;
        for(int j=1;j<=num;j++){
            if(i*prime[j]>n)break;
            f[i*prime[j]]=1;
            if(i%prime[j]==0)break;
        }
    }
}
int main(){
	int t;
	cin>>t;
	
	while(t--){
		cin>>n>>m;
		if(n<m) swap(n,m);
		
		
		
	}
	
	return 0 ;
} 
