#include<algorithm>
#include<cmath>
#include<vector>
#include<cstring> 
#include<iostream> 
#include<sstream>
#include<cstdio>
#include<stack>
using namespace std;
int main(){
int a,b;
int c;
int n  ;
cin>>a>>b>>n;
stack<int> ans;
c=a+b;
while(c/n!=0){
	ans.push(c%n);
	c=c/n;
}
ans.push(c);
while(ans.size()!=0){
	cout<<ans.top();
	ans.pop();
}
cout<<endl;
	return 0 ; 
	
}
