#include<algorithm>
#include<cmath>
#include<vector>
#include<string> 
#include<iostream> 
using namespace std;
int main(){
	int n ;
	int size;
	double a[1001]={0.0};
	double b[2001]={0.0};
	cin>>n;
	size=n;
	int x;
	double y;
	while(n--){
		cin>>x>>y;
		a[x]=y;
	}
	cin>>n;
	while(n--){
		cin>>x>>y;
		for(int i = 0 ; i!=1001;i++){
			if(a[i]!=0.0) b[i+x]+=a[i]*y;
		}
	}
	int count=0;
	for(int i  = 0;i!=2001;i++){
		if(b[i]!=0.0)  count++;
	}
	cout<<count;
	for(int i = 2000;i!=-1;i--){
		if(b[i]!=0.0) printf(" %d %.1f",i,b[i]); 
	}
	return 0;
}
