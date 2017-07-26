#include<algorithm>
#include<cmath>
#include<vector>
#include<cstring> 
#include<iostream> 
#include<sstream>
#include<cstdio>
using namespace std;
int main(){
	int a[10]={0};
	string  n;
	cin>>n;
	for(int i =0;i!=n.size();i++){
		a[n[i]-'0']++;
	}
	for(int i = 0;i!=10;i++){
		if(a[i]!=0) cout<<i<<":"<<a[i]<<endl;
	}
	
	return 0 ;
}
