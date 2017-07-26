#include<algorithm>
#include<cmath>
#include<vector>
#include<cstring> 
#include<iostream> 
#include<sstream>
#include<cstdio>
using namespace std;
struct mc{
 double  inv,price,single;
	
};
bool cmp(mc a, mc b){
	return a.single>b.single;
}
int main(){
	int n ;
	int max;

	cin>>n>>max;
		vector<mc> a(n);
	for(int i = 0 ;i!=n;i++){
		cin>>a[i].inv;
		
	}
	for(int i = 0 ;i!=n;i++){
		cin>>a[i].price;
		
	}
	for(int i = 0 ;i!=n;i++){
		a[i].single=a[i].price/a[i].inv;
		
	}
	sort(a.begin(),a.end(),cmp);
	double bnf=0.0;
	for(int i  = 0;i!=n;i++){
		if(max>=a[i].inv) bnf+=a[i].price;
		else{
			bnf+=a[i].single*max;
			break;
		}
		max=max - a[i].inv;
	}
	printf("%.2f",bnf);
	return 0 ;
	
	
}
