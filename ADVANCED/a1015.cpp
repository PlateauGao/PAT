#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
bool isprime(int n) {
	if(n <= 1) return false;
	int sqr = (int)(sqrt(n * 1.0));
	for(int i = 2; i <= sqr; i++) {
		if(n % i == 0)
			return false;
	}
	return true;
}
int re(int n ,int radix){
	int a[100001]={0};
	int i =0;
	while(n!=0){
		a[i]=n%radix;
		n=n/radix;
		i++;
	}
	int ans=0 ;
	for(int j=0;j!=i;j++){
		
		ans=ans*radix+a[j];
	}
	return ans;
	
	
	
	
	
}
int main(){
	int n;
	cin>>n;
	int radix;
	while(n>=0){
		cin>>radix;
		int dec=re(n,radix);
		if(isprime(n)&&isprime(dec)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
		
		cin>>n;
	}
	
	return 0 ;
	
	
}
