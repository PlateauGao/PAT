#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;

long long map[155];
	
	
long long toDec(string a, long long radix){
	long long out=0;

	for( int i = 0 ;i!=a.size();i++){
		
		out=out*radix+map[a[i]];
		
	}
	return out;
	
}

long long getlow(string a){
	int ans =  0;
	for(int i = 0;i!=a.size();i++){
		if(map[a[i]]>ans){
			ans=map[a[i]];
		}
	}
	return ans+1;
}
long long bs(string a,long long l,long long h,long long t ){
	long long m;
	while(l<=h){
		m=(l+h)/2;
	
		long long k =toDec(a,m);
		if(k>t)    h=m-1;
		else if(k==t)  return m;
		else l=m+1;
	}
	return -1;
	
}


int main(){
	string a,b;
	int n,flag;	
	cin>>a>>b>>flag>>n; 
	
 if (a=="1"&&b=="1"){printf("2");return 0;}
    if (a==b){printf("%d",n);return 0;}
	
	if(flag==2) swap(a,b); 

	for(char j = '0'; j <= '9'; j++) {
        map[j] = j - '0';
    }
    
    
    for(char j = 'a'; j <= 'z'; j++) {
        map[j] = j - 'a' + 10;
    }
	long long t=toDec(a,n);

	long long low=getlow(b);
	long long high=max(low,t)+1;

	long long out=bs(b,low,high,t);
	if(out ==-1) cout<<"Impossible"<<endl;
	else printf("%lld",out);
	
return 0 ;	
}
